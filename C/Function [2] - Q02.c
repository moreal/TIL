#include <stdio.h>

int GetData();
int GetMax(int n1, int n2, int n3);
void PrintData(int n1, int n2, int n3, int max);

int main()
{
	int aList[3] = {0};
	int nMax, i=0;
	
	for(; i<3; ++i)
		aList[i] = GetData();	
	
	nMax = GetMax(aList[0], aList[1], aList[2]);
	
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}

int GetData()
{
	int temp;
	scanf("%d",&temp);
	return temp;
}

int GetMax(int n1, int n2, int n3)
{
	n1 = n1 > n2 ? n1 : n2;
	n1 = n1 > n3 ? n1 : n3;
	return n1;
}

void PrintData(int n1, int n2, int n3, int max)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", n1, n2, n3, max);
}
