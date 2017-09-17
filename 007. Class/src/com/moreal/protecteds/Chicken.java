package com.moreal.protecteds;

public class Chicken { // 지역 클래스 A의 선언부이다.
	public double weight = 0.0D, length = 0.0D; // 외부에서도 전급 가능한 데이터를 선언 해 놓았습니다.
	private String name = "Chicken"; // 클래스 내에서만 접근 가능한 변수를 선언해 놓았습니다.
	protected int price = 10000; // 자신과 자신을 상속한

	// 빌더 패턴입니다. 메소드의 앞 혹은 뒤에 연속적으로 붙을 수 있습니다. 그리고 마지막에 this를 return 할 것을 요구 합니다.
	// 생성자 보다 효율적인 것 같습니다.
	public Chicken Weight(double weight) {
		this.weight = weight;
		return this;
	}

	public Chicken Length(double length) {
		this.length = length;
		return this;
	}

	public double getLength() {
		return length;
	}

	public String getName() {
		return name;
	}
}