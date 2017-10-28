#include <stdio.h>

int GetFee(int nBase, int nAge);

int main()
{
	int nAge, nBase;
	
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d",&nAge);
	
	printf("�⺻����� �Է��ϼ��� : ");
	scanf("%d",&nBase);
	
	printf("����� ���� �ݾ��� %d���Դϴ�",GetFee(nAge, nBase));
}

int GetFee(int nAge, int nBase)
{
	int nSale;
	
	if(nAge<4)
		nSale = 100;
	
	else if(nAge<14)
		nSale = 50;
	
	else if(nAge<20)
		nSale = 75;
	
	else
		nSale = 0;
		
	return nBase * (100 - nSale) / 100;
}
