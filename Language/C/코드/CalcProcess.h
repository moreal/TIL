#ifndef __CALC_PROCESS__
#define __CALC_PROCESS__

#include <time.h>

typedef struct {
	int* datas;
	int count;
	float max, min;
	float E, V, S;
} GraphData;

float getSampleAverageFloat(float* arr, int count);
GraphData CalcProcess(char* path, int max_count, int sample_size, int loop, int inter);

// Srand init flag
static time_t timePrev;

#endif