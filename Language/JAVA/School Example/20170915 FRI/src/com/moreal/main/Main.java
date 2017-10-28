package com.moreal.main;

import java.util.Scanner;

public class Main {
	
	public static void Example3_3()
	{
		char ch = 'a';
		do {
			System.out.println(ch++);
		} while(ch <= 'z');
	}
	
	public static void Example3_4(int max)
	{
		for(int i = 1; i < max; ++i, System.out.println())
			for(int j = 1; j < max; ++j, System.out.print("\t"))
				System.out.print(i + " * " + j + " = " + (i*j));
				
	}
	
	public static void Example3_5()
	{
		int sum = 0;
		
		for(int i = 1; i <= 100; ++i)
		{
			if((i & 1) == 1)
				continue;
			else
				sum += i;
		}
		
		System.out.println("Sum = " + sum);
	}
	
	public static void Question1()
	{
		// 문자열의 == 을 통한 직접적인 비교의 경우 잘 되지 않는 것을 확인 하였다. 그에 비해 hashCode로 주소값을 비교할 경우 정상적이게 작동함을 알 수 있었다.
		// 분명 주소는 같지만.. 무엇이 다른 것인지 모르겠다.

		Scanner im = new Scanner(System.in);

		String Arg;
		Arg = im.next();
		final String hello = "Hello";

		System.out.println("\nBefore " + Arg.hashCode() + " @ " + hello.hashCode() + " # "
				+ (Arg.hashCode() == hello.hashCode()) + " # " + Arg.equals(hello));

		while (Arg == "Hello")
		{
			System.out.println("\nHello " + Arg.hashCode() + " @ " + new String("Hello").hashCode());
			Arg = new String(im.next());
		}

		System.out.println("\nHello " + Arg.hashCode() + " @ " + new String("Hello").hashCode());

		System.out.println("out");
		
		im.close();
	}
	
	public static void main(String[] args)
	{
		Example3_5();
	}
}
