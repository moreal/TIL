package com.moreal.main;

import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		String str = "Hello World!";
		
		if(str == "Hello World!") // �ڹٿ����� C���� �޸� ���ڿ� ���� �ּҸ� ���� �񱳰� �����մϴ�. #�ڹ� ����
			System.out.println("The str is \"Hello World!\"");
		
		Scanner scanner = new Scanner(System.in);
		
		str = scanner.next();
		
		switch(str) // switch ������ ���� C���� �޸� ���ڿ��� ���� �񱳰� �����ϴ�.
		{
		case "HelloWorld!":
			break; // ���� break�� ���ٸ� "HelloWorld!"�� �Է� �޾��� �� �Ʒ��� ��� �������� ��ġ�� �ɰ��̴�. 
		case "MySQL":
			break;
		default:
			System.out.println("You are Wrong");
			return;
		}
		
		System.out.println("You wrote : " + str);
	}
}
