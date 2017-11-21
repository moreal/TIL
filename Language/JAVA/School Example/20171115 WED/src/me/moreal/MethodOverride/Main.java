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
		
		// List ��ȸ
		n = start;
		
		while(n != null)
		{
			n.draw();
			n = n.next;
		}
		
		
	}
}

/*
 * �����ε�(������) : �ߺ��ۼ�
 * �������̵�(���) : ���ۼ�(��üȭ, ����)
 * 
 * �������̵� ��Ģ
 * 1. �ݵ�� ���� Ŭ���� �޼ҵ�� ������ �̸�, ������ ȣ�� ����, ��ȯ Ÿ���� ������ �Ѵ�.
 * 2. �������̵��� �޼ҵ��� ���� �����ڴ� ���� Ŭ������ �޼ҵ��� ���� ������ ���� ������ �� ����. public > protected > private
 * 3. ��ȯ Ÿ�Ը� �ٸ��� ����
 * 4. static private �Ǵ� final �޼ҵ�� �������̵� �� �� ����.
 */

class DObject {
	public DObject next; // � DObject ������ ��ü�� �ּ�

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