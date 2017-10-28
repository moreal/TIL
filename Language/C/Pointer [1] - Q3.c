#include <stdio.h>

void main()
{
	int arr[10];
	int i = 0;
	int *p = arr;
	
	for(; i < 10; ++i) arr[i] = i + 1;
		
	for(i = 0; i < 10; ++i) printf("%d ", *(p+i) = *(p+i) + 2);
}
