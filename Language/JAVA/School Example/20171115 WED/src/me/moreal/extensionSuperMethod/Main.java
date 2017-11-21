package me.moreal.extensionSuperMethod;

public class Main {
	public static void main(String[] args)
	{
		B b = new B(10);
	}
}
/*  
 * super를 사용하여 상위 클래스의 생성자 및 메소드, 변수들을 호출 할 수 있다.
 * super 를 통하여 생성자를 호출 할 때 맨 첫번째 줄에 와야 한다.
 */

class A {
	public A()
	{
		System.out.println("생성자A");
	}
	
	public A(int x)
	{
		System.out.println("매개변수생성자A " + x);
	}
}

class B extends A {
	public B()
	{
		System.out.println("생성자B");
	}
	
	public B(int x)
	{
		super(x); // 만약 이 호출이 없다면 A() 를 호출하게 된다.
		System.out.println("매개변수생성자B " + x);
	}
}