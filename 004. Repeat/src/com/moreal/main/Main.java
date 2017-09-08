package com.moreal.main;

public class Main {
	public static void main(String args[])
	{
		for(int i = 0; i < 10; ++i) // 임시로 변수를 만들어 사용할 수 있다.
			System.out.println("Normally For : " + i);
		
		int[] array = { 1 , 2 , 3 , 4 , 5 };
		
		for(int i : array) // 리스트의 항목들을 하나하나 대입하며 반복할 수 있다.
			System.out.println("For of Java : " + i);
		
		int i = 0;
		while(i < 10)
		{
			System.out.println("Normally While : " + i);
			++i;
			if(i == 5)
				break; // while 반복문 탈출.
		}
	}
}
