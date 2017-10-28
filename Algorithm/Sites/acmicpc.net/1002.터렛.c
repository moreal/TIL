/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>
#include <math.h>

// �� ���� ����
 
// if ��ġ ����, �������� ���� �ٸ��� 0;
// if ��ġ ����, �������� ���� ������ -1;
// if r1+r2 == �� �ͷ� ������ �Ÿ� then = 1;
// if r1+r2 > �� �ͷ� ������ �Ÿ� then = 2;

int main(void)
{
	int T;
	scanf("%d", &T);
	
	short datas[6];
	
	double distance, Big, Small;
	
	int i;
	
	for(; T; --T)
	{
		for(i = 0; i < 6; ++i)
			scanf("%hd", &datas[i]); // hd �� short ��� �뵵�̴�.  �������� 
			
		distance = sqrt(pow(datas[0] - datas[3], 2.0) + pow(datas[1] - datas[4], 2.0));
		Big = datas[2] > datas[5] ? datas[2] : datas[5];
		Small = datas[2] > datas[5] ? datas[5] : datas[2];
			
		if (datas[0] == datas[3] && datas[1] == datas[4])
			if(datas[2] == datas[5])
				printf("-1");
			else
				printf("0");
		else if (Big + Small > distance && Big - Small < distance)
			printf("2");
		else if (Big + Small == distance || Big - Small == distance)
			printf("1");
		else
			printf("0");
			
		if(T != 1)
			putchar('\n');
	}
	
	return 0;
}
