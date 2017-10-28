#include <stdio.h>

int Add(int, int);

int main()
{
	printf("%d\n", Add(3,4));
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}
