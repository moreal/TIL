#include <stdio.h>

int main()
{
	int i = 0, j, // ������ ���� �Ű����� 
		temp; // �� ��ȭ�� ���� �ӽ� ����
		 
	int nums[10];
	
	for(; i<10; ++i)
		scanf("%d",&nums[i]);
	
	for(i=0; i<10; ++i)
		for(j=i+1; j<10;++j)
			if(nums[i]<nums[j])
			{
				temp = nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
	
	for(i=0;i<10;++i)
		printf("%d ", nums[i]);
}
