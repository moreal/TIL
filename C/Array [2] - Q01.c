#include <stdio.h>

int main()
{
	int i = 0, j, // ������ ���� �Ű����� 
		temp; // �� ��ȭ�� ���� �ӽ� ����
		 
	int nums[5] = {90,70,80,100,50};
	
	for(; i<5; ++i)
		for(j=i+1; j<5;++j)
			if(nums[i]>nums[j])
			{
				temp = nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
	
	for(i=0;i<5;++i)
		printf("%d ", nums[i]);
}
