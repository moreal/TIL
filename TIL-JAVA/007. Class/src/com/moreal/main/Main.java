package com.moreal.main;

import com.moreal.protecteds.Chicken;

public class Main {
	public static void main(String[] args)
	{
		/* 
		 * 객체 지향에서 중요한 것은 클래스와 메소드 등이다.
		 * 그에 대해 이해 해보도록 하겠다. 
		 */
		
		Chicken chicken = new Chicken().Weight(1.0D).Length(1.0D); // 초기화 과정서 Weight와 Length를 각각 1로 초기화 해주었습니다.
		TasteChicken good = (TasteChicken) new Chicken().Weight(2.0D).Length(2.0D);
		
		System.out.println("Length = " + chicken.length); // public 상태의 변수에 접근하여 출력하였습니다.
		
		//System.out.println("Name = " + chicken.name); // 이 과정서 name에 접근 할 수가 없음을 알수 있다.
		System.out.println("Name = " + chicken.getName()); // private 상태의 변수에 접근 하기 위해서는 게터세터(?)를 만들어 사용해야 한다.
		
		//System.out.println("Price" + chicken.price); // protected 는 패키지 내에서 혹은 상속한 클래스 내 에서 사용이 가능합니다.
		System.out.println("Price = " + good.getPrice()); // 그래서 이것 또한 게터세터를 필요로합니다.
	}
}