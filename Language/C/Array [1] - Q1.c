#include <stdio.h>

#define INT_MIN 0x80000000
#define INT_MAX 0x7FFFFFFF

// 홀수중의 MAX와 짝수중의 MAX를 구하여라 

typedef enum{false, true} bool; // bool 형태 생성 
typedef struct Native { int Odd; int Even; bool IsOdd; bool IsEven; } NativeNum; // 짝수와 홀수 값을 반활할 구조체입니다. 

void vAbsol(int* nNum); // 절댓값 구하기 
bool bIsLower(int nNum , int nLimit); // 3자리 이상시 잘라버립니다 니코니!
int nPower(int nNum, int nPower); // 제곱할려고 만든거니까 신경 끄시길! 
NativeNum nnCompare(int* nNum); // 비교하는 부분입니다. 

int main()
{
	int nNums[10], i; // 매개변수 
	NativeNum nnResult;
	
	for(i=0; i < 10; ++i) scanf("%d", &nNums[i]); // 입력 받아왔어요! 니코~니코니! 
	
	nnResult = nnCompare(nNums);
	
	puts("");
	
	if(nnResult.IsEven) 
		printf("짝수 중 가장 큰 값 : %d\n", nnResult.Even);
	else
		printf("짝수를 입력하지 않으셨습니다\n");
	
	if(nnResult.IsOdd)
		printf("홀수 중 가장 작은 값 : %d\n", nnResult.Odd);
	else
		printf("홀수를 입력하지 않으셨습니다\n");
	
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
	int i=0; // for문 매개변수입니다.
	NativeNum nnResult = {INT_MAX, INT_MIN, false, false};
	
	
	for (;i<10;++i)
	{
		if(!bIsLower(*(nNum+i),3)) continue;
		else if( *(nNum + i) % 2 == 0 ) nnResult.Even = nnResult.Even < *(nNum + i) ? *(nNum+i) : nnResult.Even, nnResult.IsEven = true;
		else nnResult.Odd = nnResult.Odd > *(nNum + i) ? *(nNum+i) : nnResult.Odd, nnResult.IsOdd = true;
	}
	
	return nnResult;
}
