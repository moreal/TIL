#include <stdio.h>

int main()
{
	int i = 0, InputArray[10];
	
	for(; i < 10; ++i) scanf("%d", &InputArray[i]);
	
	for(i = 2; i < 10; i+=2) InputArray[0] += InputArray[i]; // Ȧ�� �� ���ϱ� 
	for(i = 3; i < 10; i+=2) InputArray[1] += InputArray[i]; // ¦�� �� ���ϱ� 
	
	printf("Ȧ�� ��° �� : %d\n", InputArray[0]);
	printf("¦�� ��° �� : %d\n", InputArray[1]);
}
