package com.moreal.main;

import java.awt.HeadlessException;
import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		int temp[] = Question3_12();
		int hello[] = temp.clone(); /* 클론하면 영향을 끼치지 않지만 그냥 연결 시킬경우 열향을 끼친다 */
		hello[0] = 1;
		for(int i = 0; i < temp.length; ++i)
			System.out.println(temp[i]);
		
		//System.out.println(System.getProperty("user.dir")); // 이 프로그램의 주소를 얻는 법이다. console 에서 cd는 change directory 라는 의미였다.
		// javac <sourcefile> 자바 컴파일
		
		// main 인자는 차례대로 0 1 2 로 나간다.
		
		/* Exception */
		
		/*
		 * Error : OutOfMemoryError
		 * 
		 * ArithmeticException 예외 처리 : When divide some num into 0(Zero); 
		 */
		
		Question3_14();
		Question3_16();
	}
	
	public static int[] Question3_12()
	{
		int temp[] = new int[5];
		for(int i = 0; i < temp.length; ++i)
			temp[i] = 0;
		return temp;
	}
	
	public static void Question3_14()
	{
		/* ArithmeticException */
		Scanner inScan = new Scanner(System.in);
		
		int des;
		int pur;
		
		des = inScan.nextInt();
		pur = inScan.nextInt();
		
		try {
			des /= pur;
			System.out.println("Result : " + des);
		} catch(Exception e) { // 본래 ArithmeticException 이 들어가야 하지만 Exception에도 적용이 된다. catch 안의 인자값이 Exception이고 나머지 예외들은 이를 상속했기 때문이겠지.
			System.out.println("0으로 나눌 수 없습니다");
		}
		
		inScan.close();
		
	}
	
	public static void Question3_16()
	{
		/* NumberFormatException */
		
		String[] nums = {"1", "2", "3.14", "4"};
		
		try {
			for(String s : nums)
			{
				int j = Integer.parseInt(s);
			}
		} catch(NumberFormatException e) {
			System.out.println("Error : " + "Integer");
		}
		
		Question4_2();
	}
	
	/*
	 * 객체 지향은 소프트웨어 **재사용**을 위한 여러 장치 내장.
	 * 
	 * 특징:
	 * 객체구성요소	:	필드, 메소드
	 * OOP : Object Oriented Programming 객체 지향 프로그래밍
	 * 
	 * 1.캡슐화(시험):	메소드와 데이터를 클래스 내에 선언하고 구현.
	 * 				외부에서는 공개된(public)의 메소드의 인터페이스만 접근 가능.
	 * 				목적 : 보안, 
	 * 
	 * 2.상속	 : 		inheritance 상속
	 * 				extends 	확장성
	 * 
	 * 				상위클래스의 특성을 하위 클래스가 물려받음
	 * 					상위클래스 : 수퍼 클래스
	 * 					하위클래스 : 서브 클래스
	 * 
	 * 				서브 클래스
	 * 					수퍼 클래스 코드의 재사용.
	 * 					새로운 특성 추가 가능.
	 * 
	 * 				자바에서는 다중 상속 X
	 * 
	 * 3.다형성 : 		동일한 이름의 기능이 서로 다르게 작동하는 형상 (Overload)
	 * 				수퍼클래스의 메소드를 서브클래스마다 다르게 구현하는 오버라이딩
	 * 
	 * 클래스와 객체 :
	 * 	클래스 : 객체의 속성과 행위 선언, 객체의 설계도 혹은 틀.
	 * 	객체(인스턴스) : 클래스의 틀로 찍어낸 실체
	 */
	
	public static void Question4_2()
	{
		
	}
}
