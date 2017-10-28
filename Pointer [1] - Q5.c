#include <stdio.h>

void main()
{
	int arr[111];
	int i = 0, temp, size = sizeof(arr) / sizeof(arr[0]);
	int* L = arr; int* R = arr + size - 1;
	
	//printf("%d", sizeof(arr) / sizeof(int));
	
	for (; i < size; ++i) arr[i] = i + 1;
	
	//for (i = 0; i < size; ++i) printf("%d ",arr[i]);
	
	for (i = 0; i < size / 2; ++i) temp = *L, *L = *R, *R = temp, ++L, --R;
	
	for (i = 0; i < size; ++i) printf("%d ",arr[i]);
}
