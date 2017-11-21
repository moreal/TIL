#include <stdio.h>

unsigned T;
char m, d, yoil, limit;
char s[10];
	
int main()
{
	scanf("%u",&T);
	
	for(; T; --T)
	{
		scanf("%hhd %hhd %s", &m, &d, s);
		switch(s[0])
		{
			case 'S':
				if(s[1] == 'a')
					yoil = 6;
				else yoil = 0;
				break;
			
			case 'T':
				if(s[1] == 'u')
					yoil = 2;
				else yoil = 4;
				break;
			
			case 'M':
				yoil = 1;
				break;
				
			case 'F':
				yoil = 5;
				break;
				
			case 'W':
				yoil = 3;
				break;
		}
		
		while(yoil)
		{
			--d, --yoil;
			
			if(d == -1)
			{
				--m;
				switch(m)
				{
					case 2:
						d = 28;
						break;
						
					case 4:
					case 6:
					case 9:
					case 11:
						d = 30;
						break;
						
					default:
						d = 31;
				}
			}
		}
		
		for(; yoil < 7; ++yoil, ++d)
		{
			if(d > 28)
			{
				switch(m)
				{
					case 2:
						limit = 28;
						break;
						
					case 4:
					case 6:
					case 9:
					case 11:
						limit = 30;
						break;
						
					default:
						limit = 31;
				}
				if(d > limit)
					++m, d = 1;
			}
			printf("%d",d);
			if(yoil != 6)
				putchar(' ');
		}
		
		putchar('\n');
	}
}
