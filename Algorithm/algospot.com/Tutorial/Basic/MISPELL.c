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
		scanf("%hd", &MisPoint); // �� hhd�� ���� �۵� ���� �ʴ� ���ϱ� 
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
