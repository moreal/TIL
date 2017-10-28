#include <stdio.h>
#include <stdlib.h>

#define MAX 10000
//  선택 정렬

int main()
{
	int i = 0, j, // 포문에 쓰일 매개변수 
		temp; // 값 변화에 쓰일 임시 변수
		 
	int nums[MAX];
	
	for(; i<MAX; ++i)
		nums[i] = rand() % 2000000;
		
	for(i = 0; i < MAX; ++i)
	{
		for(j = i + 1; j<MAX; ++j)
		{
			if(nums[i] > nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	
	for (i = 0; i < MAX; ++i)
		printf("%d\n", nums[i]);
}
