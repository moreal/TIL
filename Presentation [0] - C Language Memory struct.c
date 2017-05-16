#include <stdio.h>
#include <stdlib.h>

char * Name = "C language";

int Stack_Init = 0;
static int Static = 0;

int * Melon;

int main()
{
	int Local = 0;
	static int Local_Static = 0;
	
	Melon = (int*) malloc(sizeof(int)*5);
	int * Malloc = (int*) malloc(sizeof(int)*7);
	
	printf("Global String Adress : %x\n", &Name); // �ʱ�ȭ��, ������ ���׸�Ʈ 
	printf("Global Int Adress : %x\n", &Stack_Init); // �ʱ�ȭ��, ������ ���׸�Ʈ 
	printf("Global Static Int Adress : %x\n", &Static); // 
	printf("Global Heap (Malloc) Int Adress : %x\n", Melon); // �ʱ�ȭ ���� ���� bss ���׸�Ʈ
	printf("Global Heap (Malloc) Int Adress : %x\n", &Malloc + 1); // �ʱ�ȭ ���� ���� bss ���׸�Ʈ
	
	printf("Local Int Adress : %x\n", &Local); // 
	printf("Local Static Int Adress : %x\n", &Local_Static);
	
	printf("Local Main : %x\n", &main);
	
	puts(""); puts("");
	
	printf("�Լ��� �޸𸮻� �ִ� ���� %x�Դϴ�\n",((int)&main >> 8));
	printf("�ʱ�ȭ�� ������ �޸𸮻� �ִ� ���� %x�Դϴ�\n",((int)&Stack_Init >> 8));
	printf("�����Ҵ�� ������ �޸𸮻� �ִ� ���� %x�Դϴ�\n",((int)&Melon >> 8));
	
	free(Melon);
}


