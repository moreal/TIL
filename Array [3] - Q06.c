#include <stdio.h>
#include <string.h>

main()
{
	char str[50];
	int i, j, middle = 1, len;
	
	printf("입력 : ");
	scanf("%s",str);

	printf("출력 : ");
	
	len = strlen(str);
	
	for (i = 0; i < len; ++i)
	{
		for (j = i+1; j < len; ++j)
			putchar(str[j]);
		
		for (j = 0; j < i+1; ++j)
			putchar(str[j]);
		
		puts("");
	}
}
