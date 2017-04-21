#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 10 // ������
#define POP 9999 // POP ��� ����
#define EXIT 8888 // ���� ��� ����

//9999 = pop() , ���� �Է½� push() , 8888 = ���� , �����÷ο�, ����÷ο�

int stack[MAX]; // ���� �迭
int top = 0; // ���� top ����
int input; //����ڰ� ���ϴ� ��. �Է��ϴ� ��

void setcolor(int a) // ����� �ٸ纸�� �; ���� �ʿ���� �Լ� �Դϴ�.
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

char check_flows() //�����÷ο� ���θ� Ȯ�� �մϴ�.
{
	if (top < 0)
	{
		top++;
		setcolor(12); printf("[ERROR]"); setcolor(11); printf(" Underflow �߻�.\a\n\n"); setcolor(15);
		return 1;
	}
	else if(top > MAX)
	{
		top--;
		setcolor(12); printf("[ERROR]"); setcolor(11); printf(" Overflow �߻�.\a\n\n"); setcolor(15);
		return 1;
	}
}

void push() //���ÿ� Ǫ���մϴ�.
{
	top++;
	if (check_flows() != 1)
	{
		stack[top - 1] = input;
		setcolor(11); printf(" %d", stack[top - 1]);
		setcolor(15); printf("�� Ǫ���߽��ϴ�.\n\n");
	}
}

int pop() //���ÿ��� ���մϴ�.
{
	top--;
	if (check_flows() != 1)
	{
		setcolor(11); printf(" %d", stack[top]);
		setcolor(15); printf("�� ���߽��ϴ�\n\n", stack[top]);
		stack[top] = input;
	}
}

int main() // �����Լ�
{
	system("Title Stack"); //�̸��� Stack ���� �����մϴ�.
	setcolor(15);

	printf(" ====Stack made by L====\n\n");
	printf("     pop 9999 �Է�\n");
	printf("     exit 8888 �Է�\n");
	printf("     push �����Է�\n\n");

	while (1)
	{
		printf("------------------------------\n\n");
		printf(" �ִ� ���� ������ �� : %d\n", MAX);
		printf("\n �Է� : ");
		
		scanf_s("%d", &input);
		switch (input)
		{
			case POP: pop(); break;
			case EXIT: system("cls"); system("mode con: lines=1 cols=42"); setcolor(11); printf("�ȳ��� ������ �����Ϸ��� �ƹ�Ű�� ��������"); _getch(); return 0; break;
			default: push(); break;
		}

		printf(" ���� ������ִ� �� : %d\n [ ", top);
		for (int i = 0; i < top; i++) printf("%d ", stack[i]); printf("]\n\n");
	}
}