/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>
#include <string.h>

short T, I, MisPoint;
char string[81];
char length, i;

int main()
{
	scanf("%hd", &T);

	for(I = 1; I <= T; ++I)
	{
		scanf("%hd", &MisPoint); // 왜 hhd는 정상 작동 하지 않는 것일까 
		scanf("%[^\n]",string);
		
		length = strlen(string);
		
		printf("%d",I);
		
		for(i = 0; i < MisPoint; ++i)
			putchar(string[i]);
			
		for(i += 1; i < length; ++i)
			putchar(string[i]);
			
		putchar('\n');
	}
	
	return 0;
}
