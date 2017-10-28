#include <stdio.h>

void main()
{
	int arr[5];
	int i = 0 , max = 0;
	int* p = arr + 4;
	
	for (; i < 5; ++i) arr[i] = i + 1;
	
	for (i = 0; i < 5; ++i) max += *(p-i);
	
	printf("%d",max);
}
