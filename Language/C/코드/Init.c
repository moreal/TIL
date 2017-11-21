// Headers
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Personal
#include "Init.h"
#include "FileProcess.h"

int initArray(void** datas, int TYPE, int count, char* path)
{
	char byteSize = 0;
	
	switch(TYPE)
	{
		case FLOAT:
		case INT:
			byteSize = 4;
			break;
			
		case LONG:
		case DOUBLE:
			byteSize = 8;
			break;
			
		case CHAR:
			byteSize = 1;
			
		default:
			puts("[ERROR] WRONG TYPE CODE :(");
			exit(0);
	}
	
	// Array to get datas
	
	*datas = (float*)malloc(byteSize * count);
	

	FILE* datasheet = NULL;
	fopen_s(&datasheet, path, "r");
	
	if(datasheet == NULL)
	{
		printf("[ERROR] Wrong URL :(\n");
		MessageBox(NULL, "ERR NO FILE", "INIT", MB_OK);
		fclose(datasheet);
		return -1;
		//exit(1);
	}
	
	switch(TYPE)
	{
	case FLOAT:
		getFloatDatasFrom(datasheet, (float*) *datas, count);
		break;		
	case INT:
		getIntDatasFrom(datasheet, (int*) *datas, count);
		break;
	case LONG:
		getLongDatasFrom(datasheet, (long*) *datas, count);
		break;
	case DOUBLE:
		getDoubleDatasFrom(datasheet, (double*) *datas, count);
		break;
	case CHAR:
		getCharDatasFrom(datasheet, (char*) *datas, count);
		break;
	}
		
	fclose(datasheet);

	return 0;
}
