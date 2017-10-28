package com.moreal.main;

public class Main {
	/*
	 * Singleton �̶�� ���� ��𿡼� �ν��Ͻ�ȭ�� �ϵ��� ó�� �ν��Ͻ��� ��ü�� ������ �ϴ� ���̴�. 
	 */
	
	public static void main(String args[])
	{
		NonSingletonPatternExample non1 = new NonSingletonPatternExample();
		NonSingletonPatternExample non2 = new NonSingletonPatternExample();
	
		SingletonPatternExample sp1 = SingletonPatternExample.getInstance();
		SingletonPatternExample sp2 = SingletonPatternExample.getInstance();
		
		// �ٸ� ��ü���� �˼� �ֽ��ϴ�.
		System.out.println("Non1 : " + non1.hashCode());
		System.out.println("Non2 : " + non2.hashCode());
		
		// �������� �� �� �ֽ��ϴ�. => ���� ��ü
		System.out.println("sp1 : " + sp1.hashCode());
		System.out.println("sp2 : " + sp2.hashCode());
	}
}
