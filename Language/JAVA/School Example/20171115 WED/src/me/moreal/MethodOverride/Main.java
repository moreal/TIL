package me.moreal.MethodOverride;

public class Main {
	public static void main(String[] args) {
		DObject start, n, obj;
		
		start = new Line();
		n = start;
		obj =  new Rect();
		n.next = obj;
		
		n = obj;
		obj = new Line();
		n.next = obj;
		
		n = obj;
		obj = new Circle();
		n.next = obj;
		
		// List 순회
		n = start;
		
		while(n != null)
		{
			n.draw();
			n = n.next;
		}
		
		
	}
}

/*
 * 오버로딩(다형성) : 중복작성
 * 오버라이딩(상속) : 재작성(구체화, 수정)
 * 
 * 오버라이딩 규칙
 * 1. 반드시 슈퍼 클래스 메소드와 동일한 이름, 동일한 호출 인자, 반환 타입을 가져야 한다.
 * 2. 오버라이딩된 메소드의 접근 지정자는 슈퍼 클래스의 메소드의 접근 지정자 보다 좁아질 수 없다. public > protected > private
 * 3. 반환 타입만 다르면 오류
 * 4. static private 또는 final 메소드는 오버라이딩 될 수 없다.
 */

class DObject {
	public DObject next; // 어떤 DObject 형식의 객체의 주소

	public DObject() {
		next = null;
	}

	public void draw() {
		System.out.println("DObject draw");
	}
}

class Line extends DObject {
	public void draw() { // Override
		System.out.println("Line");
	}
}

class Rect extends DObject {
	public void draw() { // Override
		System.out.println("Rect");
	}
}

class Circle extends DObject {
	public void draw() { // Override
		System.out.println("Circle");
	}
}