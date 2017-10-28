package com.moreal.main;

import com.moreal.main.Food.Type;

public class Main {
	public static void main(String[] args)
	{
		/*
		 * Enum 에 대해 알아보도록 하겠습니다.
		 */
		
		Food food = new Food();
		Type type = Type.RICE;
		
		System.out.println("Type에서의 RICE의 인덱스를 출력합니다 = " + type.ordinal()); // 
		
		System.out.println("Type's array = " + food.getTypes()); // Type의 배열을 출력할 것입니다.
		
		System.out.println(type.name() + "'s is " + food.getPrice(type));
	}
}
