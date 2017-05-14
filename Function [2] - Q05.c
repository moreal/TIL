#include <stdio.h>

int g_aList[5] = {0};

void InitList(void)
{
	int i=0;
	//배열 초기화 
	for(;i<5;++i)
		scanf("%d",&g_aList[i]);
}

void SortList(void)
{
	//배열 오름차순 정렬 
	int i=0, j=0, temp;
	
	for(;i<5;++i)
		for(j=i+1;j<5;++j)
			if(g_aList[i] > g_aList[j])
			{
				temp = g_aList[i];
				g_aList[i] = g_aList[j];
				g_aList[j] = temp;
			}
}

void PrintList(void)
{
	//배열 값 출력
	int i=0;
	for(;i<5;++i)
		printf("%d ",g_aList[i]);
}

int main()
{
	InitList();
	SortList();
	PrintList();
	return 0;
}
