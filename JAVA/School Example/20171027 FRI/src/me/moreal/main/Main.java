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
		 * ���� ������ ������ �ڷ����� ���� �ٸ� �Լ��� �ν��Ѵ�. ������ ��ȯ���� �ٸ� �Լ��� ��쿡�� �����ε� ���� �ʰ� �������.
		 */
		MethodOverloading overload = new MethodOverloading();
		System.out.println("1 + 2 = " + overload.getSum(1, 2));
		System.out.println("1 + 2 + 3 = " + overload.getSum(1, 2, 3));
		System.out.println("2.5 + 3.5 = " + overload.getSum(2.5, 3.5));
		
		// Constructor
		/*
		 * ��ü�� ���� �� �� new �ڿ� �ͼ� ��ü�� �ʱ�ȭ ���ִ� �뵵�� ���ȴ�.
		 * ���� �����ڰ� �ϳ��� ���� ��쿡�� �����Ϸ��� ���ڰ� ���� �ܼ� �������� ������(Default constructor)�� �������ش�.
		 * 
		 * this() : ������ ������ ��� �� �� �ִ�. Ŭ�������� �ٸ� �����ڸ� ȣ�� �� �� ���ȴ�. �ݵ�� ������ �ڵ��� ���� ó���� ����Ǿ�� �Ѵ�.
		 */
		ThisExample problem = new ThisExample();
		System.out.println("UID = " + problem.uid + " // Title = " + problem.title);
	}
}