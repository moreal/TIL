#include <stdio.h>

int GetFee(int nBase, int nAge);

int main()
{
	int nAge, nBase;
	
	printf("나이를 입력하세요 : ");
	scanf("%d",&nAge);
	
	printf("기본요금을 입력하세요 : ");
	scanf("%d",&nBase);
	
	printf("당신이 내실 금액은 %d원입니다",GetFee(nAge, nBase));
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
