#include <stdio.h>

int main()
{
	int a[4] = {1,5,7,11};
	int b[4] = {2,4,8,10};
	int result[8];
	
	int countf = 0, counts = 0, i;
	
	for(i=0; i<8; ++i)
	{
		if(a[countf] < b[counts])
		{
			if(countf==4)
			{
				result[i] = b[counts];
				break;
			}
			result[i] = a[countf];
			++countf;
		}
		else
		{
			if(counts==4)
			{
				result[i] = a[countf];
				break;
			}
			result[i] = b[counts];
			++counts;
		}
	}
	
	for(i=0;i<8;++i)
		printf("%d ",result[i]);
}
