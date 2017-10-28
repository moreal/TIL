#include <stdio.h>

void ReplaceSort(int*, int);
void PrintArray(int*, int);

int main()
{
	int Array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	ReplaceSort(Array, 10);
	PrintArray(Array, 10);
	
	return 0;
}

void ReplaceSort(int* nNums, int length)
{
	int temp = *(nNums + length - 1);
	
	for(; length > 0; --length) *(nNums+length) = *(nNums+length-1);
	
	*(nNums+0) = temp;
}

void PrintArray(int* nNums, int length)
{
	int i = 0;
	
	for (; i < length ; ++i)
	{
		printf("%d ", *(nNums+i));
	}
}
