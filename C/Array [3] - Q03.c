#include <stdio.h>
#include <malloc.h>

int strlen(char[]);

main()
{
	char str[50];
	
	scanf("%s",str);
	
	int len = strlen(str), i=0;
	
	printf("%d",len);
	
	for (i=len-1; i>=0; --i)
		putchar(str[i]);
}

int strlen(char str[])
{
	int len=0;
	while (str[len] != 0)
		++len;
	return len;
}
