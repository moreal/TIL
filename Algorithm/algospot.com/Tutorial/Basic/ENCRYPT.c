/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>
#include <string.h>

char string[101];
char T, i, length;

int main()
{
	scanf("%hhd",&T);
	
	for(; T; --T)
	{
		scanf("%s",string);
		length = strlen(string);
		
		for(i = 0; i < length; i+=2)
			putchar(string[i]);
			
		for(i = 1; i < length; i+=2)
			putchar(string[i]);
			
		putchar('\n');
	}
	
	return 0;
}
