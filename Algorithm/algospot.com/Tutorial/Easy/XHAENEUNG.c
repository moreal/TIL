/*

#include <stdio.h>
#include <string.h>

// Note : zero, one, two, three, four, five, six, seven, eight, nine, ten
// 		: z, e, n, t, w, o, h, r, s, v, i, g, z, u => e, g, h, i, n, o, r, s, t, u, v, w, z

#define E 0
#define G 1
#define H 2
#define I 3
#define N 4
#define O 5
#define R 6
#define S 7
#define T 8
#define U 9
#define V 10
#define W 11
#define Z 12
#define F 13
#define X 14

char cnt[15] = {0};

char toInt(char* str)
{
	char i = 0;
	
	for(i = 0; i < 15; ++i) // init
		cnt[i] = 0;
	
	i = 0;
	
	while(str[i]) // count
	{
		switch(str[i])
		{
		case 'e':
			++cnt[E];
			break;
		case 'f':
			++cnt[F];
			break;
		case 'g':
			++cnt[G];
			break;
		case 'h':
			++cnt[H];
			break;
		case 'i':
			++cnt[I];
			break;
		case 'n':
			++cnt[N];
			break;
		case 'o':
			++cnt[O];
			break;
		case 'r':
			++cnt[R];
			break;
		case 's':
			++cnt[S];
			break;
		case 't':
			++cnt[T];
			break;
		case 'u':
			++cnt[U];
			break;
		case 'v':
			++cnt[V];
			break;
		case 'w':
			++cnt[W];
			break;
		case 'x':
			++cnt[X];
			break;
		case 'z':
			++cnt[Z];
			break;
		}
		++i;
	}
	
	if(cnt[O] == 1) // zero, one, two, four
	{
		if(cnt[E] == 1)
		{
			if(cnt[Z] == 1 && cnt[R] == 1)
				return 0;
			else if(cnt[N] == 1)
				return 1;
		}
		else if (cnt[T] == 1 && cnt[W] == 1)
			return 2;
		else if(cnt[F] == 1 && cnt[U] == 1 && cnt[R] == 1) return 4;
	}
	else if(cnt[E] == 1) // five, eight, nine, ten
	{
		if(cnt[I] == 1)
		{
			if(cnt[F] == 1 && cnt[V] == 1)
				return 5;
			else if(cnt[G] == 1 && cnt[H] == 1 && cnt[T] == 1)
				return 8;
			else if(cnt[N] == 2)
				return 9;
		}
		else if(cnt[T] == 1 && cnt[N] == 1)
			return 10;
	}
	else if(cnt[E] == 2) // seven, three
	{
		if(cnt[S] ==  1 && cnt[V] == 1 && cnt[N] == 1)
			return 7;
		else if(cnt[T] == 1 && cnt[H] == 1 && cnt[R] == 1)
			return 3;
	}
	else if(cnt[S] == 1 && cnt[I] == 1 && cnt[X] == 1)
		return 6;
	return -50;
}

char des1, des2, C;
char temp[11], oper;

int main()
{
	scanf("%hhd", &C);
	for(; C; --C)
	{	
		scanf("%s",temp); // des1
		des1 = toInt(temp);
	
		scanf(" %c ", &oper); // operator
		
		scanf("%s",temp); // des1
		des2 = toInt(temp);
		
		switch(oper)
		{
		case '+':
			des1 += des2;
			break;
		case '-':
			des1 -= des2;
			break;
		case '*':
			des1 *= des2;
			break;
		}
		
		scanf(" %c %s", &oper, temp); // result
		des2 = toInt(temp);
		
		if (des1 > 10 || des1 < 0 || des1 != des2)
			printf("No");
		else
			printf("Yes");
			
		if(C != 1)
			putchar('\n');
	}
	return 0;
} First Try */

#include <stdio.h>
#include <string.h>

char nums[][11] = { "eorz", "eno", "otw", "eehrt", "foru", "efiv", "isx", "eensv","eghit", "einn", "ent"};
char temp[11];
char left, right, oper;

unsigned int T;

char toInt(char* src)
{
	char temp, i = 0, j = 0;
	
	for(i = 0; src[i]; ++i)
		for(j = i + 1; src[j]; ++j)
			if(src[i] > src[j])
				temp = src[i], src[i] = src[j], src[j] = temp;
	
	for(i = 0; i < 11; ++i)
		if(!strcmp(nums[i], src))
			break;
			
	//puts(src);
			
	if(i == 11)
		return -50;
	
	return i;
}

int main()
{	
	scanf("%u",&T);
	
	for(; T; --T)
	{
		scanf("%s",temp);
		left = toInt(temp); // operand_left
		
		scanf(" %c ", &oper); // useful memory
		
		scanf("%s",temp);
		right = toInt(temp); // operand_right
		
		switch(oper)
		{
		case '-':
			left -= right;
			break;
		case '+':
			left += right;
			break;
		case '*':
			left *= right;
			break;
		}
		
		scanf(" %c ", &oper); // To erase
		
		scanf("%s", temp);
		right = toInt(temp); // result
		
		if(left > 10 || left < 0 || left != right)
			printf("No");
		else
			printf("Yes");
			
		if(T > 1)
			putchar('\n');
	}
	return 0;
}

// 틀렸던 이유 : Yes No 가 답이지만 YES NO 로 작성하였기 때문이다. 
