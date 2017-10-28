#include <stdio.h>

int nInput = 100;

void TestFunc()
{
	printf("TestFunc() : %d\n",nInput);
}

int main()
{
	int nInput = 0;
	printf("main() : %d\n",nInput);
	{
		int nInput = 20;
		printf("virtual() : %d\n",nInput);
	}
	TestFunc();
	return 0;
}
