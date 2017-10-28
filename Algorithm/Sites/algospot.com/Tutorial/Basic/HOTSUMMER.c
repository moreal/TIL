/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>

unsigned int T;

short total, perHour;

char i;

int main()
{
	scanf("%u",&T);
	
	for(; T; --T)
	{
		scanf("%hd",&total);
		
		for(i = 0; i < 9; ++i)
			scanf("%hd",&perHour), total -= perHour;
			
		if(total & 0x8000)
			puts("NO");
		else
			puts("YES");
	}
}
