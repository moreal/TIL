#include <stdio.h>

char getBiggest(char str[], int length);
int strlen(char str[]);

main()
{
	char str[50] = {0};
	printf("�Է� : ");
	scanf("%s",str);
	printf("�ƽ�Ű �ڵ� ���� ���� ū ���� : %c", getBiggest(str, strlen(str)));
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
