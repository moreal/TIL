#include <stdio.h>
#include <stdlib.h>

char * Name = "C language";

int Global = 0;
static int Static = 0;

int * Melon;

int main()
{
	int Local = 0;
	static int Local_Static = 0;
	
	Melon = (int*) malloc(sizeof(int)*5);
	int * Malloc = (int*) malloc(sizeof(int)*7);
	
	printf("Global String Adress : %x\n", &Name); // 초기화된, 데이터 세그먼트 
	printf("Global Int Adress : %x\n\n", &Global); // 초기화된, 데이터 세그먼트 
	printf("Global Static Int Adress : %x\n\n", &Static); // 
	
	// 동적할당
	printf("Global Heap (Malloc) Int Adress : %x\n", Melon); // 초기화 되지 않은 bss 세그먼트 
	printf("Global Heap (Malloc) Int Adress : %x\n", Malloc); // 초기화 되지 않은 bss 세그먼트
	
	printf("Local Int Adress : %x\n", &Local); // 
	printf("Local Static Int Adress : %x\n", &Local_Static);
	
	printf("Local Main : %x\n", &main);
	
	puts(""); puts("");
	
	printf("함수가 메모리상에 있는 곳은 %x입니다\n",((int)&main >> 8));
	//printf("초기화된 변수가 메모리상에 있는 곳은 %x입니다\n\n",((int) Stack_Init >> 8);
	
	printf("Stack : 지역변수나 매개변수가 있는 곳은 %s입니다",(int) &Local >> 8);
	printf("Data : 정적변수나 전역 변수가 있는 곳은 %x\n",(int)&Static>>8);
	printf("Heap : 동적할당된 변수가 메모리상에 있는 곳은 %x입니다\n",((int)Melon >> 8));
	
	free(Melon);
}


