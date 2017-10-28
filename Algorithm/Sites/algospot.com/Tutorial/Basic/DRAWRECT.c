#include <stdio.h>

int main()
{
  	unsigned int T;
  
  	short zens[6];
  	
  	char i;
  
  	scanf("%u",&T);
  
  	for(; T; --T)
	{
		for(i = 0; i < 6; ++i)
	  		scanf("%hd",&zens[i]);

	  	/* row */
	  	if(zens[0] == zens[2]) printf("%d ", zens[4]);
	  	else if(zens[0] == zens[4]) printf("%d ", zens[2]);
	  	else printf("%d ", zens[0]);
	  	
	  	/* col */
	  	if(zens[1] == zens[3]) printf("%d\n", zens[5]);
	  	else if(zens[1] == zens[5]) printf("%d\n", zens[3]);
	  	else printf("%d\n", zens[1]);
	}
	
	return 0;
}
