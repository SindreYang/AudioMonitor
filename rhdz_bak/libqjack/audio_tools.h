
#ifndef AUDIO_TOOLS_H
#define AUDIO_TOOLS_H

#include <math.h>

#define PI	3.14


float getDbVal(float val);
float getDbPercent(float db);
float hard_clip(float val, float min, float max);


#endif

/* audio_tools.h ends here */
