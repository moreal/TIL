#include <stdio.h>

typedef struct {
	double x,y;
} point;

void output_p(point* p) { printf("��� : (%lf, %lf)\n\n", p->x, p->y); }
// printf ���� ������................  

void input_p(point* p)
{
	do{
		fflush(stdin), fputs("Insert Point X Position : ", stdout);
	} while(scanf("%lf",&(p->x)) != 1);
	
	do{
		fflush(stdin), fputs("Insert Point Y Position : ", stdout);
	} while(scanf("%lf",&(p->y)) != 1); // -> �������� ����ü�� �������� ��� ���� ���� 
}

point tri_center(point* p)
{
	point temp = {0};
	char i = 0;
	
	for(; i < 3; ++i)
		temp.x += (p+i)->x,
		temp.y += (p+i)->y;
		
	temp.x /= 3;
	temp.y /= 3;
	
	return temp;
}

void main()
{
	point p[3]; // point 3�� 
	point center;
	
	input_p(&p[0]);
	output_p(&p[0]);
	
	input_p(&p[1]);
	output_p(&p[1]);
	
	input_p(&p[2]);
	output_p(&p[2]);
	
	center = tri_center(p);
	
	output_p(&center);
}
