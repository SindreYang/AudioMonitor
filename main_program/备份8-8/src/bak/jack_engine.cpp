
#include <math.h>
#include "jack_engine.h"

JackEngine::JackEngine() : JackClient(), _master("master")
{
  buffer1=NULL;
  buffer2=NULL;
}
JackEngine::~JackEngine()
{
  if (buffer1) {
    free(buffer1);
    free(buffer2);
  }
}
bool JackEngine::initEngine(QString name)
{
  _audioProcessReady=false;
  if (initClient(name)) {
    if (buffer1) {
      free(buffer1);
      free(buffer2);
    }
    buffer1=(sample_t*)malloc(sizeof(sample_t) * _blockSize);
    buffer2=(sample_t*)malloc(sizeof(sample_t) * _blockSize);

    //createMidiIn("midi_in");
    
    for (int i=0; i < _mixers.count(); i++) {
      QString id=_mixers.at(i)->getID();
      addAudioInput(id + "_1");
      addAudioInput(id + "_2");
    }
    addAudioOutput("master_1");
    addAudioOutput("master_2");
    _audioProcessReady=true;
    return true;
  }
  return false;
}

bool JackEngine::addMixer(VolumeMeter *vm)
{
  if (_client) {
    QString id=vm->getID();
    if (!addAudioInput(id + "_1") || !addAudioInput(id + "_2"))
      return false;
  }
  //_mutex.lock();
  _mixers.append(vm);
  //_mutex.unlock();
  return true;
}
void JackEngine::removeMixer(VolumeMeter *vm)
{
  if (_client) {
    QString id=vm->getID();
    removeAudioInput(id + "_1");
    removeAudioInput(id + "_2");
  }
  //_mutex.lock();
  _mixers.removeAt(_mixers.indexOf(vm));
  //_mutex.unlock();
}
void JackEngine::refreshVu()
{
  if (_client) {
    for (int i=0; i < _mixers.count(); i++)
      _mixers.at(i)->refresh();
    _master.refresh();    
  }
}


void JackEngine::audio_process(jack_nframes_t nframes)
{
  if (!_audioProcessReady)
    return;
  
  sample_t *out1=(sample_t *)jack_port_get_buffer(_audioOutputs["master_1"], nframes);
  sample_t *out2=(sample_t *)jack_port_get_buffer(_audioOutputs["master_2"], nframes);

  memset(out1, 0, sizeof(sample_t) * nframes);
  memset(out2, 0, sizeof(sample_t) * nframes);

  //_mutex.lock();
  if (_mixers.count()) {
    for (int i=0; i < _mixers.count(); i++) {
      QString id=_mixers.at(i)->getID();
      sample_t *in1=(sample_t *)jack_port_get_buffer(_audioInputs[id + "_1"], nframes);
      sample_t *in2=(sample_t *)jack_port_get_buffer(_audioInputs[id + "_2"], nframes);
      memcpy(buffer1, in1, sizeof(sample_t) * nframes);
      memcpy(buffer2, in2, sizeof(sample_t) * nframes);
      _mixers.at(i)->processBuffers(buffer1, buffer2, nframes);
      for (uint n=0; n < nframes; n++) {
            out1[n]+=buffer1[n];
            out2[n]+=buffer2[n];
      }
    }
  }
  //_mutex.unlock();
  _master.processBuffers(out1, out2, nframes);
}

// 
// jack_engine.cpp ends here
