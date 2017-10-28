#include <stdio.h>

char getBiggest(char str[], int length);
int strlen(char str[]);

main()
{
	char str[50] = {0};
	printf("입력 : ");
	scanf("%s",str);
	printf("아스키 코드 값이 가장 큰 문자 : %c", getBiggest(str, strlen(str)));
}
char getBiggest(char str[], int length)
{
	int i = 1;
	char temp = str[0];
	for (; i<length; ++i)
	{
		temp = temp < str[i] ? str[i] : temp;
	}
	return temp;
}

int strlen(char str[])
{
	int len=0;
	while (str[len] != 0)
		++len;
	return len;
}
