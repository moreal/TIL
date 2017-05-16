#include <stdio.h>

int main()
{
	int i = 0, InputArray[10];
	
	for(; i < 10; ++i) scanf("%d", &InputArray[i]);
	
	for(i = 2; i < 10; i+=2) InputArray[0] += InputArray[i]; // 홀수 합 구하기 
	for(i = 3; i < 10; i+=2) InputArray[1] += InputArray[i]; // 짝수 합 구하기 
	
	printf("홀수 번째 합 : %d\n", InputArray[0]);
	printf("짝수 번째 합 : %d\n", InputArray[1]);
}
