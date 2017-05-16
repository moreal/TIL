#include <stdio.h>

int getIndex(int*, int);
 
int main()1ㄱ 
{
	int a[10] = { 11, 18, 26, 27, 39, 57, 63, 75, 76, 80 };
	int num = getIndex(a, 80);
	printf("%d",num);
}

int getIndex(int* nNums, int nWant)
{
	//printf("%d",sizeof(nNums));
	int i = 0, length = 10, index = length / 2, big_index = length, small_index = 0;
	
	while(i < length / 2)
	{
		if( *(nNums+index) == nWant )
			break;
			
		else if( *(nNums+index) > nWant )
		{
			//printf("최대 인덱스의 변화 : %d ->> %d\n", big_index, index);
			big_index = index;
			index = (index + small_index)/2;
			//printf("인덱스의 변화 : %d\n\n",index);
		}
		
		else if( *(nNums+index) < nWant )
		{
			//printf("최소 인덱스의 변화 : %d ->> %d\n", big_index, index);
			small_index = index;
			index = (index + big_index)/2;
			//printf("인덱스의 변화 : %d\n\n",index);
		}
		
		++i;
	}
	
	if(i==length/2) printf("찾는 값이 없습니다.");
	else return index;
	
	return 0;
}
