package com.moreal.main;

public class SingletonPatternExample {

	// 처음 생성된 객체만을 리턴해 주기 위해 static 으로 인스턴스를 생성해 놓는다.
	private static SingletonPatternExample instance = new SingletonPatternExample();
	
	private SingletonPatternExample() {}
	
	// 인스턴스를 반환해 주는 함수
	public static SingletonPatternExample getInstance()
	{
		return instance;
	}
}
