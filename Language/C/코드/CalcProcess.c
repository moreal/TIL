#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>

#include "CalcProcess.h"
#include "init.h"
#include "MainProc.h"

float getSampleAverageFloat(float* arr, int size, int count)
{
	if(timePrev != time(NULL))
		timePrev= time(NULL), srand(time(NULL));
	
	int i = 0;
	float SampleSum = 0;
	
	for (i = 0; i < count; ++i)
		SampleSum += arr[rand()%size];
		
	return SampleSum / count;
}

float getE(float* arr, int size)
{
	int i;
	double sum = 0;

	for (i = 0; i < size; ++i)
		sum += arr[i];

	return sum / size;
}

float getV(float* arr, float E, int size)
{
	int i;
	float V = 0, temp;
	
	for (i = 0; i < size; ++i)
		temp = E - arr[i], V += temp * temp;

	return V / size;
}

float getS(float V)
{
	return (float)sqrt((double)V);
}

GraphData CalcProcess(char* path, int max_count, int sample_size, int loop, int inter)
{
	// Heap init
	if (!gd.datas)
		free(gd.datas), gd.datas = NULL;

	GraphData gd = {0};
	gd.count = -1;

	// var init
	int amount = 0;
	float* floatDatas = NULL;
	
	if (initArray(&floatDatas, FLOAT, max_count, path) == -1)
	{
		gd.datas = NULL;
		return gd;
	}

	int i = 0;
	float max = -1, min = INT_MAX;
	float* result = (float*)calloc(loop, sizeof(float));

	for (i = 0; i < loop; ++i)
	{
		result[i] = getSampleAverageFloat(floatDatas, max_count, sample_size);
		if (result[i] > max)
			max = result[i];
		if (result[i] < min)
			min = result[i];
	}

	amount = (int)((max - min) * inter);

	int* count = (int*) calloc(amount,sizeof(int));

	for (i = 0; i < loop; ++i)
		count[(int)((result[i] - min) * inter)]++;
	
	gd.count = amount;
	gd.datas = count;
	gd.min = min;
	gd.max = max;
	gd.E = getE(result, amount);
	gd.V = getV(result, gd.E, amount);
	gd.S = getS(gd.V);
	
	// Clean heap
	free(result);
	free(floatDatas);

	return gd;
}