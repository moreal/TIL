#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char* name;
	char* school;
	int grade;
}student;

void _puts(const char* buf)
{
	int i = 0;
	while(buf[i] != 0)
		putchar(buf[i]), ++i;
}

void _strcpy(char* buf, char** place)
{
	int i = 0;
	while(buf[i] != 0)
		++i;
		
	*place = (char*)malloc(i);
	//printf("%d",*place);
	
	while(i > -1)
		*(*place+i) = buf[i], --i;
		//putchar(*(*place+i)),putchar(*(buf+i))
}

void _gets_s(char** buf)
{
	int i = 0;
	
	*buf = (char*)malloc(1);
	
	while(1)
	{
		*(*buf+i) = fgetc(stdin);
		//putchar(buf[i]);
		if( *(*buf+i) == '\n' ) // || *(*buf+i) == ' '
		{
			*(*buf+i) = 0;
			break;
		}
		++i;
		realloc(*buf,i);
	}
}

void close_student(student temp)
{
	free(temp.name);
	free(temp.school);
}

void main()
{
	student std;
	char* buf = NULL;
	int i = 0;
	
	puts("매우 쓸데 없이 복잡하게 짠 코드\n\n");
	
	_puts("이름 입력:");
	
	_gets_s(&std.name);
	
	_puts("학교 이름 입력:");
	
	_gets_s(&std.school);

	//printf("%d\n",&std.name);
	//_gets(buf,&std.name);
	//printf("%d\n\n",std.name);
	//std.name = (char*)malloc(i+1);
	puts(std.name);
	_puts(std.school);
	close_student(student);
}
