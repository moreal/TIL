#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
    for(; i<50; ++i)
    {
    	toto();
	}
}

void toto()
{
	char win=0;
    int team1[9];
    int team2[9];
    int i = 0;
    int total = 0;
    
    for (; i < 9; ++i)
    {
    	team1[i] = rand() % 21;
    }
    
    for (i = 0; i < 9; ++i)
    {
    	team2[i] = rand() % 21;
    }
    
    for (i = 0; i < 9; ++i)
    {
        total += team1[i] - team2[i];
        if(total > 0) win = 1;
    }
    
    if (win == 1 && total < 0)
    {
    	for(i=0; i<9;++i)
    	{
    		printf("%2d ",team1[i]);
		}
		puts("");
		
		for(i=0; i<9;++i)
    	{
    		printf("%2d ",team2[i]);
		}
		puts("");
		
    	puts("");
    
    	printf("total : %d / win : %d\n",total,win);
    	if (win == 1 && total < 0) printf("Yes");
    	else printf("No");
    
    	puts(""); puts("");
	}
    
	
}
