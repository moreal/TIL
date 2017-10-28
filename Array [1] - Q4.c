#include <stdio.h>

// 월 입력값이 0 이면 종료. 연도와 월을 입력 받음.
 
int main()
{
	char Daze[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int InputYear, InputMonth;
	
	printf("YEAR : "); scanf("%d", &InputYear);
	printf("Month : "); scanf("%d", &InputMonth);
	
	if (!InputMonth || InputMonth < 1 || InputMonth > 12) return 0;
	
	printf("입력하신 달의 날 수는 %d일 입니다.", Daze[InputMonth-1] + (!(InputYear % 4) && (InputYear % 100) || !(InputYear%400)));
}
