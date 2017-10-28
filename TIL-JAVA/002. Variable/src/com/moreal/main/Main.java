package com.moreal.main;

public class Main {
	public static void main(String args[])
	{
		/* 기본 타입 */
		
		// 논리 타입
		boolean bBool = false; // size = 1byte; range = { true, false };
		
		// 정수 타입
		byte bByte = 0; // size = 1byte; range = { -128 ~ 127 };
		short sShort = 0; // size = 2byte; range = { -32768 ~ 32767 };
		char cChar = '흥'; // size = 2byte; range = 유니코드 문자;
		int iInt = 0; // size = 4byte; range = { -2147483648 ~ 2147483647 };
		long lLong = 0L; // size = 8byte; range = { -9223372036854775808 ~ 9223372036854775807 };
		
		// 실수 타입
		float fFloat = 0.0f; // size = 4byte;
		double dDouble = 0.0D; // size = 8byte;
		
		/* 리터럴(상수, literal) */
		
		// 진수 사용법
		bByte = (byte) 0b01111111;
		sShort = (short) 0077777;
		iInt = 0x7fffffff;
		lLong = 0x7fffffffffffffffL; // 뒤에 L 혹으 l을 붙여주도록 하자.
		
		// final : 값을 바꿀 수 없는 상수를 선언한다. C언어에서는 const
		// static : 메모리 상에 상주하도록 만든다. C언어에서도 static
		
		// 테스트 출력
		System.out.println("bByte = " + bByte);
		System.out.println("sShort = " + sShort);
		System.out.println("iInt = " + iInt);
		System.out.println("lLong = " +lLong);
	}
}