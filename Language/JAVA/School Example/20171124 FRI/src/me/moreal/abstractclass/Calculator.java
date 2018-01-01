package me.moreal.abstractclass;

public abstract class Calculator {
	/*
	 * Abstract 추상
	 * 
	 * Abstract 메소드를 하나라도 가지고 있다면 그것은 추상 클래스
	 * 
	 * 그 추상클래스를 상속 받았더라도 추상 메소드를 구현해 주지 않았더라면 그것 또한 추상 클래스 (그 경우 abstract 명시)
	 * 
	 * 추상클래스의 용도:
	 * 서브 클래스마다 목적에 맞게 추상메소드를 
	 * => 다형성 실현
	 * 
	 * 슈퍼 클래스에서는 개념 정의
	 * => 서브 클래스마다 다른 구현이 필요한 메소드는 추상 메소드로 선언
	 * 
	 * 계층적 상속 관계를 가질때
	 */
	
	abstract public int add(int a, int b);
	abstract public int subtract(int a, int b);
	abstract public double average(int[] a);
}
