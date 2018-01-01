package me.moreal.abstractclass;

public abstract class Calculator {
	/*
	 * Abstract �߻�
	 * 
	 * Abstract �޼ҵ带 �ϳ��� ������ �ִٸ� �װ��� �߻� Ŭ����
	 * 
	 * �� �߻�Ŭ������ ��� �޾Ҵ��� �߻� �޼ҵ带 ������ ���� �ʾҴ���� �װ� ���� �߻� Ŭ���� (�� ��� abstract ���)
	 * 
	 * �߻�Ŭ������ �뵵:
	 * ���� Ŭ�������� ������ �°� �߻�޼ҵ带 
	 * => ������ ����
	 * 
	 * ���� Ŭ���������� ���� ����
	 * => ���� Ŭ�������� �ٸ� ������ �ʿ��� �޼ҵ�� �߻� �޼ҵ�� ����
	 * 
	 * ������ ��� ���踦 ������
	 */
	
	abstract public int add(int a, int b);
	abstract public int subtract(int a, int b);
	abstract public double average(int[] a);
}
