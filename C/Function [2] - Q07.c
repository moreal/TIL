#include <stdio.h>

int GetMin(int, int, int, int);

int main()
{
	int n1, n2, n3, n4;
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	
	printf("%d",GetMin(n1, n2, n3, n4));
	
	return 0;
}

int GetMin(int w, int x, int y, int z)
{
	w = w < x ? w : x;
	w = w < y ? w : y;
	w = w < z ? w : z;
	
	return w;
}
