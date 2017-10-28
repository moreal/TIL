#include <stdio.h>
int main();

static int * Func = &main;

int main()
{
	printf("%x",Func);
	*Func();
}
