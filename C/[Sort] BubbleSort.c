#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

// 버블 정렬

int main()
{
	int i = 0, j, // 포문에 사용될 매개변수 
		temp; // 임시 변수 
	int nums[MAX]; // 숫자들을 담는다. 
	
	for (; i < MAX; ++i)
		nums[i] = (rand() % 32764) * (rand() % 32764);
	
	for (i = 0; i < MAX-1; ++i)
	{
		for (j = 0; j < MAX - i; ++j)
		{
			if (nums[j] > nums[j+1])
			{
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp; 
			}
		}
	}
	
	for (i = 0; i < MAX; ++i)
		printf("%d\n",nums[i]);
}
