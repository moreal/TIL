package com.moreal.main;

public class Main {
	public static void main(String args[])
	{
		for(int i = 0; i < 10; ++i) // �ӽ÷� ������ ����� ����� �� �ִ�.
			System.out.println("Normally For : " + i);
		
		int[] array = { 1 , 2 , 3 , 4 , 5 };
		
		for(int i : array) // ����Ʈ�� �׸���� �ϳ��ϳ� �����ϸ� �ݺ��� �� �ִ�.
			System.out.println("For of Java : " + i);
		
		int i = 0;
		while(i < 10)
		{
			System.out.println("Normally While : " + i);
			++i;
			if(i == 5)
				break; // while �ݺ��� Ż��.
		}
	}
}
