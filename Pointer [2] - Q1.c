#include <stdio.h>

void main()
{
	int i;
	int arr1[2][2] = {1,2,3,4};
	int arr2[3][2] = {1,2,3,4,5,6};
	int arr3[4][2] = {1,2,3,4,5,6,7,8};
	int (*ptr)[4];
	
	ptr=arr1;
	for(i=0; i<2; ++i)
		printf("%d %d %d %d\n",ptr[i][0], ptr[i][1],ptr[i][2],ptr[i][3]);
	
	puts("");
	
	ptr=arr2;
	for(i=0; i<3; ++i)
		printf("%d %d %d %d\n",ptr[i][0], ptr[i][1],ptr[i][2],ptr[i][3]);
	
	puts("");
	
	ptr=arr3;
	for(i=0; i<8; ++i)
		printf("%d %d %d %d\n",ptr[i][0], ptr[i][1],ptr[i][2],ptr[i][3]);
	
}
