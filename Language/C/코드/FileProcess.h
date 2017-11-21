#ifndef __FILEPROCESS__
#define __FILEPROCESS__

// Headers
#include <stdio.h>

int getFloatDatasFrom(FILE* f, float* des, int count);
int getLongDatasFrom(FILE* f, long* des, int count);
int getDoubleDatasFrom(FILE* f, double* des, int count);
int getIntDatasFrom(FILE* f, int* des, int count);
int getCharDatasFrom(FILE* f, char* des, int count);

#endif
