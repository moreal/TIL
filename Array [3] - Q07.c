#include <stdio.h>

main()
{
	char str[3][20];
	int i=0;
	
	for(; i<3; ++i)
		scanf("%s",str[i]);
	
	puts("");
	
	for (i=2; i>=0; --i)
		puts(str[i]);
}
