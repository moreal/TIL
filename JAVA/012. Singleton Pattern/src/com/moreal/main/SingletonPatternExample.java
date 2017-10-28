package com.moreal.main;

public class SingletonPatternExample {

	// ó�� ������ ��ü���� ������ �ֱ� ���� static ���� �ν��Ͻ��� ������ ���´�.
	private static SingletonPatternExample instance = new SingletonPatternExample();
	
	private SingletonPatternExample() {}
	
	// �ν��Ͻ��� ��ȯ�� �ִ� �Լ�
	public static SingletonPatternExample getInstance()
	{
		return instance;
	}
}
