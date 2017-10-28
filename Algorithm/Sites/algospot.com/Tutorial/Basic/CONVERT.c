/////////////////////
//
// Solved By Moreal
// 2017.10.26
//
/////////////////////

#include <stdio.h>

short I, T;
double numeral; // ¼öÄ¡(?) 
char unit[3]; 

int main()
{
	scanf("%hd",&T);
	
	for(I = 1; I <= T; ++I)
	{
		scanf("%lf %s",&numeral, unit);
		
		printf("%d ", I);
		
		if(unit[0] == 'l')
			if(unit[1])
				printf("%.04lf kg\n",numeral * 0.4536); // lb, pound => kg
			else
				printf("%.04lf g\n",numeral * 0.2642); // l, liters => g
		else if (unit[0] == 'g')
			printf("%.04lf l\n",numeral * 3.7854); // g, gallon => l
		else
			printf("%.04lf lb\n",numeral * 2.2046); // kg, kilograms => lb
	}
	
	return 0;
}
