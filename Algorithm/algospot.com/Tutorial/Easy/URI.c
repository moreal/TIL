/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>

short C, data;
char string[81], i;

int main()
{
	scanf("%hd", &C);
	getchar();
	for(; C; --C)
	{
		scanf("%s",string);
		
		for(i = 0; string[i]; ++i)
			if(string[i] == '%')
				sscanf(string+i+1,"%02hx",&data), putchar(data), i += 2;
			else
				putchar(string[i]);
				
		putchar('\n');
	}
	return 0;
}
