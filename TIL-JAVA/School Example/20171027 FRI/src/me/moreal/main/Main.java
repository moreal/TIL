package me.moreal.main;

public class Main {
	public static void main(String[] args)
	{
		GoodsArray goods = new GoodsArray();
		
		for(Good g : goods.getGoods())
		{
			System.out.println(g.getPrice());
		}
		
		// Curious thing, Reference :: Not solved yet.
		MyInt i = new MyInt(30);
		
		/*String s1 = "Moreal";
		String s2 = "LDG";*/
		String name[] = {"Moreal"};
		
		Person p = new Person(name);
		
		//name = s2;
		
		System.out.println(p.name + " " + name);
		
		p.setAge(i);
		
		// Reference study
		String src = "This is a pencil.";
		char[] srcC = src.toCharArray();
		ArrayParameter.replaceSpace(srcC);
		System.out.println(srcC);
		
		// Method overloading
		/*
		 * 인자 갯수와 인자의 자료형에 따라서 다른 함수로 인식한다. 하지만 반환형만 다른 함수의 경우에는 오버로딩 되지 않고 사라진다.
		 */
		MethodOverloading overload = new MethodOverloading();
		System.out.println("1 + 2 = " + overload.getSum(1, 2));
		System.out.println("1 + 2 + 3 = " + overload.getSum(1, 2, 3));
		System.out.println("2.5 + 3.5 = " + overload.getSum(2.5, 3.5));
		
		// Constructor
		/*
		 * 객체를 생성 할 때 new 뒤에 와서 객체를 초기화 해주는 용도로 사용된다.
		 * 만약 생성자가 하나도 없을 경우에는 컴파일러가 인자가 없는 단순 리턴형의 생성자(Default constructor)를 삽입해준다.
		 * 
		 * this() : 생성자 내에서 사용 할 수 있다. 클래스내의 다른 생성자를 호출 할 때 사용된다. 반드시 생성자 코드의 제일 처음에 수행되어야 한다.
		 */
		ThisExample problem = new ThisExample();
		System.out.println("UID = " + problem.uid + " // Title = " + problem.title);
	}
}