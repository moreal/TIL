package com.moreal.main;

public class Main {
	
	// C언어에서 main함수가 필요 하듯이 java main함수의 기본 형식이다.
	public static void main(String args[])
	{
		//System 객체의 출력 클래스에서 print, println라는 메소드를 호출.
		System.out.print("Hello");
		System.out.println(" World"); // 두 함수의 차이는 줄바꿈이다.
		
		//System 객체의 출력 클래스에서 printf 메소드를 호출해보았다. 사용법은 C언어와 같다.
		System.out.printf("%s\n", "Hello World");
	}
}