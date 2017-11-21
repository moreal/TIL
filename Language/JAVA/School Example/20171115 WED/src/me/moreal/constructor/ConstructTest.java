package me.moreal.constructor;

public class ConstructTest {
	public static void main(String[] args){
		C c = new C();
	}
}

class A{
	A()
	{
		System.out.println("持失切A");
	}
}

class B extends A{
	B()
	{
		System.out.println("持失切B");
	}
}

class C extends B{
	C()
	{
		System.out.println("持失切C");
	}
}

/*
 *
 */