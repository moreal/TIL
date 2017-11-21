package me.moreal.extension;

public class Main {
	public static void main(String[] args)
	{
		Student s = new Student();
		s.set();
		
		System.out.println(s.getWeight());
		
		/*
		 * Q. 서브 클래스와 인스턴스가 생성될 때 서브클래스의 생성자와 슈퍼클래스의 생성자가 모두 실해오디는가?
		 * A. 둘다 실행된다. 슈퍼 클래스의 생성자가 먼저 실행된 후 서블 클래스의 생성자가 실행된다.
		 * 
		 * 생성자의 목표 : 초기화를 위해서
		 */
	}
}