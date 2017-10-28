#include <stdio.h>

void Person1() {puts("Person1_Win!");}
void Person2() {puts("Person2_Win!");}
void Draw() {puts("Draw!");}

int main()
{
	int n1, n2;
	void (*fp[3])() = {Person1, Person2, Draw};
	
	while(1)
	{
		puts("");
		puts("가위 0  / 바위 1  / 보 2 ");
		printf("Person1 : ");
		while(scanf("%d", &n1) != 1 || n1 < 0 || n1 > 2 )
		{fflush(stdin), puts(""), puts("Please insert Integer (0 ~ 2)"), printf("Person1 : ");}
		
		fflush(stdin);
		
		printf("Person2 : "); // 가위 0  / 바위 1  / 보 2 
		while(scanf("%d", &n2) != 1 || n2 < 0 || n2 > 2 )
		{fflush(stdin), puts(""), puts("Please insert Integer (0 ~ 2)"), printf("Person2 : ");}
	
		n1 -= n2; n1 += 2; // 수정 필요 
		// 바위 바위 1 1 // 2 - 2 = 0 , 0 + 2
		fp[(n1 % 3)]();
	}
	//printf("%d %d",n1 % 3,n1);
}
