#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 10 // 사이즈
#define POP 9999 // POP 상수 선언
#define EXIT 8888 // 종료 상수 선언

//9999 = pop() , 숫자 입력시 push() , 8888 = 종료 , 오버플로우, 언더플로우

int stack[MAX]; // 스택 배열
int top = 0; // 스택 top 변수
int input; //사용자가 원하는 수. 입력하는 수

void setcolor(int a) // 색깔로 꾸며보고 싶어서 만든 필요없는 함수 입니다.
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

char check_flows() //오버플로우 여부를 확인 합니다.
{
	if (top < 0)
	{
		top++;
		setcolor(12); printf("[ERROR]"); setcolor(11); printf(" Underflow 발생.\a\n\n"); setcolor(15);
		return 1;
	}
	else if(top > MAX)
	{
		top--;
		setcolor(12); printf("[ERROR]"); setcolor(11); printf(" Overflow 발생.\a\n\n"); setcolor(15);
		return 1;
	}
}

void push() //스택에 푸시합니다.
{
	top++;
	if (check_flows() != 1)
	{
		stack[top - 1] = input;
		setcolor(11); printf(" %d", stack[top - 1]);
		setcolor(15); printf("을 푸시했습니다.\n\n");
	}
}

int pop() //스택에서 팝합니다.
{
	top--;
	if (check_flows() != 1)
	{
		setcolor(11); printf(" %d", stack[top]);
		setcolor(15); printf("을 팝했습니다\n\n", stack[top]);
		stack[top] = input;
	}
}

int main() // 메인함수
{
	system("Title Stack"); //이름을 Stack 으로 수정합니다.
	setcolor(15);

	printf(" ====Stack made by L====\n\n");
	printf("     pop 9999 입력\n");
	printf("     exit 8888 입력\n");
	printf("     push 숫자입력\n\n");

	while (1)
	{
		printf("------------------------------\n\n");
		printf(" 최대 저장 가능한 양 : %d\n", MAX);
		printf("\n 입력 : ");
		
		scanf_s("%d", &input);
		switch (input)
		{
			case POP: pop(); break;
			case EXIT: system("cls"); system("mode con: lines=1 cols=42"); setcolor(11); printf("안녕히 가세요 종료하려면 아무키나 누르세요"); _getch(); return 0; break;
			default: push(); break;
		}

		printf(" 현재 저장되있는 양 : %d\n [ ", top);
		for (int i = 0; i < top; i++) printf("%d ", stack[i]); printf("]\n\n");
	}
}