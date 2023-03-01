
#include "audio_tools.h"

float getDbVal(float val)
{
  float db=20.0f * log10f(val);
  return db;
}
float getDbPercent(float db) 
{
  float def = 0.0f; /* Meter deflection %age */

  if (db < -70.0f) {
    def = 0.0f;
  } else if (db < -60.0f) {
    def = (db + 70.0f) * 0.25f;
  } else if (db < -50.0f) {
    def = (db + 60.0f) * 0.5f + 2.5f;
  } else if (db < -40.0f) {
    def = (db + 50.0f) * 0.75f + 7.5;
  } else if (db < -30.0f) {
    def = (db + 40.0f) * 1.5f + 15.0f;
  } else if (db < -20.0f) {
    def = (db + 30.0f) * 2.0f + 30.0f;
  } else if (db < 6.0f) {
    def = (db + 20.0f) * 2.5f + 50.0f;
  } else {
    def = 115.0f;
  }
  /* 115 is the deflection %age that would be 
     when db=6.0. this is an arbitrary
     endpoint for our scaling.
  */

  return def/115.0f * 100.0f;
}
float hard_clip(float val, float min, float max)
{
  if (val > max)
    return max;
  if (val < min)
    return min;
  return val;
}



// 
// audio_tools.cpp ends here
