#include <stdio.h>
#include <windows.h>

struct Num
{
	char * nums;
	int length;
	
	void set(char * cNums, int nLength)
	{
		nums = cNums;
		length = nLength;
	}
};

int nToTen(char num[], int nLaunch);
int nPower(int num, int power);
Num nToOther(int nTen, int nLaunch);
void ReplacePrint(Num);

int main()
{
	int nInLaunch, nOutLaunch, i=1; // 입력 , 출력 진수를 의미한다.
	char * nNum = (char*)malloc(sizeof(char)*10);
	
	while(1){
	printf("몇진수 ( 2진수부터 62진수까지 지원합니다 ) : ");
	scanf("%d", &nInLaunch);
	
	if(nInLaunch>62 || nInLaunch<2) { printf("[Error] 맞지 않는 진수를 입력하신것 같습니다!\n\n"); continue;}
	
	fflush(stdin);
	
	printf("수를 입력하세요 : ");
	gets(nNum);
	if(*nNum=='-') { printf("[Error] 음수를 입력하신것 같습니다!\n\n"); continue;}
	
	printf("몇진수로 출력할까요 : ");
	scanf("%d", &nOutLaunch);
	
	if(nInLaunch>62 || nInLaunch<2) { printf("[Error] 맞지 않는 진수를 입력하신것 같습니다!\n\n"); continue;}
	
	ReplacePrint( nToOther(nToTen(nNum,nInLaunch),nOutLaunch)); }
}

int nToTen(char num[], int nLaunch)
{
	int length = 0, total = 0, i, j;
	char base, cut;

	while (num[length+1] != 0) ++length;
	
	for (i = 0 ; i <= length; ++i)
	{
		base = '0', cut = 0;
		for (j = 0; j < nLaunch; ++j)
		{
			if (j > 36)
				base = 'a', cut = 37;
			else if (j > 9)
				base = 'A', cut = 10;
			if (base + j - cut == num[i])
				break;
		}
		total += j * nPower(nLaunch, length-i);
	}
	
	return total;
}

Num nToOther(int nTen, int nLaunch)
{
	char * nums = (char*) malloc(10);
	int index=0;
	char base;
	
	while(nTen!=0)
	{
		*(nums+index) = nTen % nLaunch;
		if(*(nums+index)>36) *(nums+index) += 'a' - 37;
		else if(*(nums+index) > 9) *(nums+index) +=  'A' - 10;
		else *(nums+index) += '0';
		nTen /= nLaunch;
		++index;
	}
	*(nums+index) = 0;
	Num num; num.set(nums,index);
	return num;
}

int nPower(int num, int power)
{
	int total = 1;
	
	for (int i = 0; i < power; ++i) total *= num;
	
	return total;
}

void ReplacePrint(Num num)
{
	if(num.length==0) putchar('0');
	for (; num.length >= 0; --num.length) printf("%c",*(num.nums + num.length));
	puts("");
}
