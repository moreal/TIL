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
	
	short length, i, j, front, back;
	
	for(; T; --T)
	{
		scanf("%s",string);
		
		length = strlen(string);

		for(i = 0; i < length; i += 2)
		{
			for(j = i; j < length; j += 2)
			{
				front = (string[i] << 8) + string[i+1];
				back = (string[j] << 8) + string[j+1];
				if(front > back)
				{
					temp[0] = string[i];
					temp[1] = string[i+1];
					
					string[i] = string[j];
					string[i+1] = string[j+1];
					
					string[j] = temp[0];
					string[j+1] = temp[1];
				}
			}
		}
		
		puts(string);
	}
	
	return 0;
}
