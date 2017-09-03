package com.moreal.main;

public class Main {
	public static void main(String args[])
	{	
		/* 증감 연산자 */
		int iTemp = 0;
		System.out.println("iTemp++ = " + iTemp++);
		System.out.println("iTemp-- = " + iTemp--);
		System.out.println("--iTemp = " + --iTemp);
		System.out.println("++iTemp = " + ++iTemp);
		
		/* 사칙연산 + a*/
		System.out.println("3 + 2 = " + (3 + 2));
		System.out.println("3 - 2 = " + (3 - 2));
		System.out.println("3 * 2 = " + (3 * 2)); // 곱 연산
		System.out.println("3 / 2 = " + (3 / 2)); // 몫 연산
		System.out.println("3 % 2 = " + (3 % 2)); // 나머지 연산
		
		/* 비트연산 */
		System.out.println("1 & 0 = " + (1 & 0)); // 1 과 0의 AND 연산
		System.out.println("1 | 0 = " + (1 | 0)); // 1 과 0의 OR 연산
		System.out.println("1 ^ 0 = " + (1 ^ 0)); // 1 과 0의 XOR 연산 , 서로 다를 때 true
		System.out.println("~1 = " + (~1)); // 1 의 NOT 연산
		
		/* 비교연산 */
		System.out.println("1 == 1 = " + (1 == 1));
		System.out.println("1 <= 1 = " + (1 <= 1));
		System.out.println("1 >= 1 = " + (1 >= 1));
		System.out.println("1 < 1 = " + (1 < 1));
		System.out.println("1 > 1 = " + (1 > 1));
		System.out.println("1 != 0 = " + (1 != 0));
		
		/* 논리연산 */
		System.out.println("true && true = " + (1 == 1 && 0 == 0));
		System.out.println("true || false = " + (1 == 1 && 1 == 0));
		System.out.println("true ^ false = " + (true ^ false));
		System.out.println("!true = " + !true);
		
		/* 시프트 연산 */
		System.out.println("1 << 1 = " + (1 << 1)); // 1을 왼쪽으로 한 비트씩 옮긴다.
		System.out.println("-2 >> 1 = " + (-2 >> 1)); // 2를 오른쪽으로 한 비트씩 옮긴다. 단 최상위 비트는 계속 우지된다.
		System.out.println("-2 >>> 1 = " + (-2 >>> 1)); // 2를 오른쪽으로 한 비트씩 옮긴다. 단 최상위 비트는 옮길수 0으로 세팅된다.
		// -2 >>> 1 의 경우 1바이트 기준, 1111 1110 이 비트를 옮겨 0111 1111이 되어 int의 MAX 값이 나왔다.
	}
}
