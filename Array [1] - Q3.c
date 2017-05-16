#include <stdio.h>

// 1반 부터 6반 까지의 평균 점수ㅜ를 저장한 후, 두 반을 입력받아 두 반의 평균 점수의 합을 출력하는 프로그램을 작성해보자

int main()
{
	float ClassArray[6];
	int i=0, Class1=0, Class2=0; //클래스가 보고 싶어.... 
	
	for (;i<6; ++i) printf("%d 반 : ",i+1), scanf("%f",&ClassArray[i]);
	
	printf("두 반 : "); scanf("%d %d",&Class1, &Class2);
	
	printf("%.1f", ClassArray[Class1 - 1] + ClassArray[Class2 - 1]);
	
	return 0;
}
