#include <stdio.h>

// 1�� ���� 6�� ������ ��� �����̸� ������ ��, �� ���� �Է¹޾� �� ���� ��� ������ ���� ����ϴ� ���α׷��� �ۼ��غ���

int main()
{
	float ClassArray[6];
	int i=0, Class1=0, Class2=0; //Ŭ������ ���� �;�.... 
	
	for (;i<6; ++i) printf("%d �� : ",i+1), scanf("%f",&ClassArray[i]);
	
	printf("�� �� : "); scanf("%d %d",&Class1, &Class2);
	
	printf("%.1f", ClassArray[Class1 - 1] + ClassArray[Class2 - 1]);
	
	return 0;
}
