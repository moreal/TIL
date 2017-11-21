package me.moreal.extensionSuperMethod;

public class Main {
	public static void main(String[] args)
	{
		B b = new B(10);
	}
}
/*  
 * super�� ����Ͽ� ���� Ŭ������ ������ �� �޼ҵ�, �������� ȣ�� �� �� �ִ�.
 * super �� ���Ͽ� �����ڸ� ȣ�� �� �� �� ù��° �ٿ� �;� �Ѵ�.
 */

class A {
	public A()
	{
		System.out.println("������A");
	}
	
	public A(int x)
	{
		System.out.println("�Ű�����������A " + x);
	}
}

class B extends A {
	public B()
	{
		System.out.println("������B");
	}
	
	public B(int x)
	{
		super(x); // ���� �� ȣ���� ���ٸ� A() �� ȣ���ϰ� �ȴ�.
		System.out.println("�Ű�����������B " + x);
	}
}