#include <stdio.h>

/*
	5명의 저축액을 입력받아 저축왕의 번호와 저축액을 출력하는 프로그램을 작성해보자 
*/

typedef struct {
	int num;
	long long save;
} person;

int power(unsigned char want)
{
	char i = 0;
	int temp = 1;
	
	for (; i < want; ++i)
		temp *= 10;
	
	return temp;
}

void main()
{
	char i = 0;
	char max = 0;
	long long temp;
	
	person students[5] = { 0 };
	
	for(; i < 5; ++i)
		students[i].num = i, scanf("%d",&(students[i].save));
	
	puts("");
	
	for(i = 1; i < 5; ++i)
		if(students[i].save > students[max].save) max = i;
		
	putc('1' + max, stdout);
	putc(' ', stdout); putc('-', stdout); putc(' ', stdout);
	
	temp = students[max].save;
	
	i = 19;
	while((temp / power(i))==0)
		--i;
	
	for (; i >= 0; --i)
		putc('0' + temp / power(i), stdout), temp -= temp / power(i);
}
