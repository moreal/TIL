#include <stdio.h>

int main()
{
	int aList[3] ={0};
	int nMax=-9999, i=0;
	
	for(;i<3;++i)
		scanf("%d",&aList[i]);
	
	nMax=aList[0];
	
	for(i=1;i<3;++i)
		nMax = nMax<aList[i] ? aList[i] : nMax;
	
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�. \n",aList[0],aList[1],aList[2],nMax);
}
