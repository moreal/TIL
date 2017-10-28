/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>
#include <string.h>

char string[1001];
char temp[2];

int main()
{
	unsigned int T;
	scanf("%d",&T);
	
	short length, i, j;
	
	for(; T; --T)
	{
		scanf("%s",string);
		
		length = strlen(string) / 2;

		for(i = 0; i < length; ++i)
		{
			for(j = i; j < length; ++j)
			{
				if(string[i * 2] > string[j * 2] || (string[i * 2] == string[j * 2] && string[i * 2 + 1] > string[j * 2 + 1]))
				{
					temp[0] = string[i*2];
					temp[1] = string[i*2+1];
					
					string[i*2] = string[j*2];
					string[i*2+1] = string[j*2+1];
					
					string[j*2] = temp[0];
					string[j*2+1] = temp[1];
				}
			}
		}
		
		puts(string);
	}
	
	return 0;
}
