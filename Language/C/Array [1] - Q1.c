#include <stdio.h>

#define INT_MIN 0x80000000
#define INT_MAX 0x7FFFFFFF

// Ȧ������ MAX�� ¦������ MAX�� ���Ͽ��� 

typedef enum{false, true} bool; // bool ���� ���� 
typedef struct Native { int Odd; int Even; bool IsOdd; bool IsEven; } NativeNum; // ¦���� Ȧ�� ���� ��Ȱ�� ����ü�Դϴ�. 

void vAbsol(int* nNum); // ���� ���ϱ� 
bool bIsLower(int nNum , int nLimit); // 3�ڸ� �̻�� �߶�����ϴ� ���ڴ�!
int nPower(int nNum, int nPower); // �����ҷ��� ����Ŵϱ� �Ű� ���ñ�! 
NativeNum nnCompare(int* nNum); // ���ϴ� �κ��Դϴ�. 

int main()
{
	int nNums[10], i; // �Ű����� 
	NativeNum nnResult;
	
	for(i=0; i < 10; ++i) scanf("%d", &nNums[i]); // �Է� �޾ƿԾ��! ����~���ڴ�! 
	
	nnResult = nnCompare(nNums);
	
	puts("");
	
	if(nnResult.IsEven) 
		printf("¦�� �� ���� ū �� : %d\n", nnResult.Even);
	else
		printf("¦���� �Է����� �����̽��ϴ�\n");
	
	if(nnResult.IsOdd)
		printf("Ȧ�� �� ���� ���� �� : %d\n", nnResult.Odd);
	else
		printf("Ȧ���� �Է����� �����̽��ϴ�\n");
	
	return 0;
}

void vAbsol(int* nNum)
{
	*nNum *= *nNum < 0 ? -1 : 1 ;
}

bool bIsLower(int nNum, int nLimit)
{
	if ((nNum / nPower(10 , nLimit)) == 0) return true;
	return false;
}

int nPower(int nNum, int nPower)
{
	int temp = nNum;
	for(; nPower > 1; --nPower) temp *= nNum;
	return temp;
}

NativeNum nnCompare(int* nNum)
{
	int i=0; // for�� �Ű������Դϴ�.
	NativeNum nnResult = {INT_MAX, INT_MIN, false, false};
	
	
	for (;i<10;++i)
	{
		if(!bIsLower(*(nNum+i),3)) continue;
		else if( *(nNum + i) % 2 == 0 ) nnResult.Even = nnResult.Even < *(nNum + i) ? *(nNum+i) : nnResult.Even, nnResult.IsEven = true;
		else nnResult.Odd = nnResult.Odd > *(nNum + i) ? *(nNum+i) : nnResult.Odd, nnResult.IsOdd = true;
	}
	
	return nnResult;
}
