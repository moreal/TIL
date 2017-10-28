#include <stdio.h>
#include <string.h>

main()
{
	char str[50] = { 0 };
	int want, len,i;
	printf("ют╥б : ");
	scanf("%s %d",str, &want);
	
	len = strlen(str);
	
	for (i = len-1; i >= len - want; --i)
		putchar(str[i]);
}
