package com.moreal.main;

import java.awt.HeadlessException;
import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		int temp[] = Question3_12();
		int hello[] = temp.clone(); /* Ŭ���ϸ� ������ ��ġ�� ������ �׳� ���� ��ų��� ������ ��ģ�� */
		hello[0] = 1;
		for(int i = 0; i < temp.length; ++i)
			System.out.println(temp[i]);
		
		//System.out.println(System.getProperty("user.dir")); // �� ���α׷��� �ּҸ� ��� ���̴�. console ���� cd�� change directory ��� �ǹ̿���.
		// javac <sourcefile> �ڹ� ������
		
		// main ���ڴ� ���ʴ�� 0 1 2 �� ������.
		
		/* Exception */
		
		/*
		 * Error : OutOfMemoryError
		 * 
		 * ArithmeticException ���� ó�� : When divide some num into 0(Zero); 
		 */
		
		Question3_14();
		Question3_16();
	}
	
	public static int[] Question3_12()
	{
		int temp[] = new int[5];
		for(int i = 0; i < temp.length; ++i)
			temp[i] = 0;
		return temp;
	}
	
	public static void Question3_14()
	{
		/* ArithmeticException */
		Scanner inScan = new Scanner(System.in);
		
		int des;
		int pur;
		
		des = inScan.nextInt();
		pur = inScan.nextInt();
		
		try {
			des /= pur;
			System.out.println("Result : " + des);
		} catch(Exception e) { // ���� ArithmeticException �� ���� ������ Exception���� ������ �ȴ�. catch ���� ���ڰ��� Exception�̰� ������ ���ܵ��� �̸� ����߱� �����̰���.
			System.out.println("0���� ���� �� �����ϴ�");
		}
		
		inScan.close();
		
	}
	
	public static void Question3_16()
	{
		/* NumberFormatException */
		
		String[] nums = {"1", "2", "3.14", "4"};
		
		try {
			for(String s : nums)
			{
				int j = Integer.parseInt(s);
			}
		} catch(NumberFormatException e) {
			System.out.println("Error : " + "Integer");
		}
		
		Question4_2();
	}
	
	/*
	 * ��ü ������ ����Ʈ���� **����**�� ���� ���� ��ġ ����.
	 * 
	 * Ư¡:
	 * ��ü�������	:	�ʵ�, �޼ҵ�
	 * OOP : Object Oriented Programming ��ü ���� ���α׷���
	 * 
	 * 1.ĸ��ȭ(����):	�޼ҵ�� �����͸� Ŭ���� ���� �����ϰ� ����.
	 * 				�ܺο����� ������(public)�� �޼ҵ��� �������̽��� ���� ����.
	 * 				���� : ����, 
	 * 
	 * 2.���	 : 		inheritance ���
	 * 				extends 	Ȯ�强
	 * 
	 * 				����Ŭ������ Ư���� ���� Ŭ������ ��������
	 * 					����Ŭ���� : ���� Ŭ����
	 * 					����Ŭ���� : ���� Ŭ����
	 * 
	 * 				���� Ŭ����
	 * 					���� Ŭ���� �ڵ��� ����.
	 * 					���ο� Ư�� �߰� ����.
	 * 
	 * 				�ڹٿ����� ���� ��� X
	 * 
	 * 3.������ : 		������ �̸��� ����� ���� �ٸ��� �۵��ϴ� ���� (Overload)
	 * 				����Ŭ������ �޼ҵ带 ����Ŭ�������� �ٸ��� �����ϴ� �������̵�
	 * 
	 * Ŭ������ ��ü :
	 * 	Ŭ���� : ��ü�� �Ӽ��� ���� ����, ��ü�� ���赵 Ȥ�� Ʋ.
	 * 	��ü(�ν��Ͻ�) : Ŭ������ Ʋ�� �� ��ü
	 */
	
	public static void Question4_2()
	{
		
	}
}
