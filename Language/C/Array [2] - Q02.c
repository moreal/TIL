#include <stdio.h>

int main()
{
	int i = 0, j, // 포문에 쓰일 매개변수 
		temp; // 값 변화에 쓰일 임시 변수
		 
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
