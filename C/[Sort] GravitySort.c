//Gravity sort

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main()
{
	int Array[LENGTH];
	int i = 0, j, temp, Max=INT_MIN;
	int** result = NULL;
	
	for (; i<LENGTH; ++i)
	{
		Array[i]=(rand()%32764)*10;
		if (Max < Array[i]) Max = Array[i];
	}
	
	printf("MAX = %d\n",Max);
	
	result = (int**) malloc(sizeof(int*)*(LENGTH+1));
	for (i = 0; i<LENGTH+1; ++i)
		result[i] = (int*) malloc(sizeof(int)*Max);
	
	printf("MEMORY : %d\n",LENGTH * Max * 4);
	
	for (i = 0; i < LENGTH; ++i)
		for (j = 0; j < Array[i]; ++j)
			result[i][j]++;
	
	printf("input clear\n\n");
	
	for (j = 0; j<Max; ++j)
		for (i = 0; i < LENGTH; ++i)
			result[LENGTH+1][j] += result[i][j] == 1 ? 1 : 0;
	
	for (j = 0; j < LENGTH; ++j)
	{
		printf("%d",result[LENGTH+1][j]);
	}
	for(i=0; i<LENGTH; ++i)
		free(result[i]);
	free(result);
	//for (j = 0; j < LENGTH)
	
}
