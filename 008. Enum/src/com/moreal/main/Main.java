package com.moreal.main;

import com.moreal.main.Food.Type;

public class Main {
	public static void main(String[] args)
	{
		/*
		 * Enum �� ���� �˾ƺ����� �ϰڽ��ϴ�.
		 */
		
		Food food = new Food();
		Type type = Type.RICE;
		
		System.out.println("Type������ RICE�� �ε����� ����մϴ� = " + type.ordinal()); // 
		
		System.out.println("Type's array = " + food.getTypes()); // Type�� �迭�� ����� ���Դϴ�.
		
		System.out.println(type.name() + "'s is " + food.getPrice(type));
	}
}
