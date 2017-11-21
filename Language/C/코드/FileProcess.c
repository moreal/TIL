// Personal
#include "FileProcess.h"

int getFloatDatasFrom(FILE* f, float* des, int count)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
		if(fscanf_s(f,"%f",des+i) != 1)
			break;
			
	return i;
}

int getLongDatasFrom(FILE* f, long* des, int count)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
		if(fscanf_s(f,"%ld",des+i) != 1)
			break;
			
	return i;
}

int getDoubleDatasFrom(FILE* f, double* des, int count)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
		if(fscanf_s(f,"%lf",des+i) != 1)
			break;
			
	return i;
}

int getIntDatasFrom(FILE* f, int* des, int count)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
		if(fscanf_s(f,"%d",des+i) != 1)
			break;
			
	return i;
}

int getCharDatasFrom(FILE* f, char* des, int count)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
		if(fscanf_s(f,"%c",des+i) != 1)
			break;
			
	return i;
}
