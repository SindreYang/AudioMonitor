
#include "audio_tools.h"
#include <math.h>
#define TINY 1.0e-23
//dpm表函数
float getDbVal(float val)
{
  float db=20.0f * log10f(val);
  return db;
}
float getDbPercent(float db)  {
         float def = 0.0f; /* Meter deflection %age */
 
         if (db < -70.0f) {
                 def = 0.0f;
         } else if (db < -60.0f) {
                 def = (db + 70.0f) * 0.25f;
         } else if (db < -50.0f) {
                 def = (db + 60.0f) * 0.5f + 5.0f;
         } else if (db < -40.0f) {
                 def = (db + 50.0f) * 0.75f + 7.5;
         } else if (db < -30.0f) {
                 def = (db + 40.0f) * 1.5f + 15.0f;
         } else if (db < -20.0f) {
                 def = (db + 30.0f) * 2.0f + 30.0f;
         } else if (db < 0.0f) {
                 def = (db + 20.0f) * 2.5f + 50.0f;
         } else {
                 def = 100.0f;
         }
 
         return def/100.0f*70.0f;
}
float hard_clip(float val, float min, float max)
{
  if (val > max)
    return max;
  if (val < min)
    return min;
  return val;
}

//dpm表函数


//jf表函数

float tau(float *x, float *y, unsigned int n)
{
       	unsigned int n2=0,n1=0,i,j;
	long is=0;
	float aa, a2, a1;

	for (i=0; i<n; i++) {
		for (j=i; j<n; j++) {
			a1 = x[i] - x[j];
			a2 = y[i] - y[j];
			aa = a1*a2;
			if (aa) {
				++n1;
				++n2;
				aa > 0.0 ? ++is : --is;
			} else {
				if (a1) ++n1;
				if (a2) ++n2;
			}
		}
	}
	return is / (sqrtf((float)n1 * (float)n2) + TINY);
}

//水母表xy坐标
void trace(int columns ,int  &x, int &y){
        float bias=1.0f;
        float lp[2];
        float ring_buf[2][1024];
        for (int i=0;i<columns;i++){
                for (int j=0; j<1024;j++){
                        lp[i*2] = lp[i*2] * 0.9f + ring_buf[i*2][j] *bias * 0.1f;
                        lp[i*2+1] = lp[i*2+1] * 0.9f +ring_buf[i*2+1][j] * bias * 0.1f;

                        x = lp[i*2+1] * 80.0f * 0.707f -
                        lp[i*2] * 80.0f * 0.707f;
                        if (x > 100) {
                        x = 100;
                        } else if (x < -100) {
                        x = -100;
                        }

                        y = lp[i*2+1] * -80.0f * 0.707f +
                        lp[i*2] * -80.0f * 0.707f;
                        if (y > 99) {
                        y = 99;
                        } else if (y < -96) {
                        y = -96;
                        }
                }
        }
}

//水母表下的测角表
void  tay_lp(int columns,int &w,char &c ) {
        int i=columns;
        float ring_buf[columns][1024];
        float tau_lp[columns/2];
        tau_lp[i] = tau_lp[i] * 0.8f + tau((float *)ring_buf[i*2], (float *)ring_buf[i*2+1], 1024) * 0.2f;
        if (tau_lp[i] > 0.0f) {
                //绿色部分
                w=(int)(tau_lp[i] * 92.0f);
                c='g';
        }else {
                w = (int)(tau_lp[i] * -92.0f) + 1;
                c='r';
        }
}
// 
// audio_tools.cpp ends here
