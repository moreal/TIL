#include <stdio.h>
#include <wchar.h>

typedef struct {
	char name[30];
	int height;
	int weight;
}person;

void main()
{
	int i = 0;
	person people[5];
	for(; i < 5; ++i)
	{
		putc('\n',stdout);
		gets(people[i].name);
		/*putc(people[i].name[2],stdout);
		putc(people[i].name[3],stdout);*/
		
		printf("%c%c\n %d %x\n %d %x",people[i].name[0],people[i].name[1],people[i].name[0],people[i].name[0],people[i].name[1],people[i].name[1]);
	}
	
}
