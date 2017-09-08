package com.moreal.main;

import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		String str = "Hello World!";
		
		if(str == "Hello World!") // 자바에서는 C언어와 달리 문자열 과의 주소를 통한 비교가 가능합니다. #자바 구조
			System.out.println("The str is \"Hello World!\"");
		
		Scanner scanner = new Scanner(System.in);
		
		str = scanner.next();
		
		switch(str) // switch 문에서 또한 C언어와 달리 문자열을 통한 비교가 가능하다.
		{
		case "HelloWorld!":
			break; // 만약 break가 없다면 "HelloWorld!"를 입력 받았을 때 아래의 모든 과정또한 거치게 될것이다. 
		case "MySQL":
			break;
		default:
			System.out.println("You are Wrong");
			return;
		}
		
		System.out.println("You wrote : " + str);
	}
}
