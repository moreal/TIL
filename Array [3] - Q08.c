#include <stdio.h>

main()
{
	char word[10][20] = {"pen","pencil","class","book","lion","lesson","tel","champion","information","computer"};
	int i;
	char input = getchar();
	
	for(i=0; i<10; ++i)
		if(*(word[i]) == input)
			puts(word[i]);
}
