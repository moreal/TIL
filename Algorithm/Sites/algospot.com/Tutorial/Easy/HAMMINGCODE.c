/////////////////////
//
// Solved By Moreal
// 2017.10.27 
//
/////////////////////

#include <stdio.h>

/*
 * 패리티 비트를 주면 이진수를 출력하라. 
 */
 
unsigned int T;
char binary[8];
char hamming, i;

int main()
{
	scanf("%u",&T);
	
	for(; T; --T)
	{
		scanf("%s",binary);
		
		for(i = 0; i < 7; ++i)
			binary[i] -= '0';
			
		hamming = binary[0] ^ binary[2] ^ binary[4] ^ binary[6];
		hamming |= (binary[1] ^ binary[2] ^ binary[5] ^ binary[6]) << 1;
		hamming |= (binary[3] ^ binary[4] ^ binary[5] ^ binary[6]) << 2;
		
		--hamming;
		
		binary[hamming] = !binary[hamming];
		
		printf("%c%c%c%c",binary[2]+'0',binary[4]+'0', binary[5]+'0', binary[6]+'0');
		
		if(T != 1)
			putchar('\n');
	}
	return 0;
}
