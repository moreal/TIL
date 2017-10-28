package com.moreal.main;

public class Main {
	/*
	 * Singleton 이라는 것은 어디에서 인스턴스화를 하든지 처음 인스턴스한 개체를 가지게 하는 것이다. 
	 */
	
	public static void main(String args[])
	{
		NonSingletonPatternExample non1 = new NonSingletonPatternExample();
		NonSingletonPatternExample non2 = new NonSingletonPatternExample();
	
		SingletonPatternExample sp1 = SingletonPatternExample.getInstance();
		SingletonPatternExample sp2 = SingletonPatternExample.getInstance();
		
		// 다른 객체임을 알수 있습니다.
		System.out.println("Non1 : " + non1.hashCode());
		System.out.println("Non2 : " + non2.hashCode());
		
		// 동일함을 볼 수 있습니다. => 같은 객체
		System.out.println("sp1 : " + sp1.hashCode());
		System.out.println("sp2 : " + sp2.hashCode());
	}
}
