#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

// ���� ����

int main()
{
	int i = 0, j, // ������ ���� �Ű����� 
		temp; // �ӽ� ���� 
	int nums[MAX]; // ���ڵ��� ��´�. 
	
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
