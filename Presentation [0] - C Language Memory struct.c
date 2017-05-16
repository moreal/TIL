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
	
	printf("Global String Adress : %x\n", &Name); // 초기화된, 데이터 세그먼트 
	printf("Global Int Adress : %x\n", &Stack_Init); // 초기화된, 데이터 세그먼트 
	printf("Global Static Int Adress : %x\n", &Static); // 
	printf("Global Heap (Malloc) Int Adress : %x\n", Melon); // 초기화 되지 않은 bss 세그먼트
	printf("Global Heap (Malloc) Int Adress : %x\n", &Malloc + 1); // 초기화 되지 않은 bss 세그먼트
	
	printf("Local Int Adress : %x\n", &Local); // 
	printf("Local Static Int Adress : %x\n", &Local_Static);
	
	printf("Local Main : %x\n", &main);
	
	puts(""); puts("");
	
	printf("함수가 메모리상에 있는 곳은 %x입니다\n",((int)&main >> 8));
	printf("초기화된 변수가 메모리상에 있는 곳은 %x입니다\n",((int)&Stack_Init >> 8));
	printf("동적할당된 변수가 메모리상에 있는 곳은 %x입니다\n",((int)&Melon >> 8));
	
	free(Melon);
}


