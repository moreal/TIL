package com.moreal.main;

public class Main {
	public static void main(String args[])
	{	
		/* ���� ������ */
		int iTemp = 0;
		System.out.println("iTemp++ = " + iTemp++);
		System.out.println("iTemp-- = " + iTemp--);
		System.out.println("--iTemp = " + --iTemp);
		System.out.println("++iTemp = " + ++iTemp);
		
		/* ��Ģ���� + a*/
		System.out.println("3 + 2 = " + (3 + 2));
		System.out.println("3 - 2 = " + (3 - 2));
		System.out.println("3 * 2 = " + (3 * 2)); // �� ����
		System.out.println("3 / 2 = " + (3 / 2)); // �� ����
		System.out.println("3 % 2 = " + (3 % 2)); // ������ ����
		
		/* ��Ʈ���� */
		System.out.println("1 & 0 = " + (1 & 0)); // 1 �� 0�� AND ����
		System.out.println("1 | 0 = " + (1 | 0)); // 1 �� 0�� OR ����
		System.out.println("1 ^ 0 = " + (1 ^ 0)); // 1 �� 0�� XOR ���� , ���� �ٸ� �� true
		System.out.println("~1 = " + (~1)); // 1 �� NOT ����
		
		/* �񱳿��� */
		System.out.println("1 == 1 = " + (1 == 1));
		System.out.println("1 <= 1 = " + (1 <= 1));
		System.out.println("1 >= 1 = " + (1 >= 1));
		System.out.println("1 < 1 = " + (1 < 1));
		System.out.println("1 > 1 = " + (1 > 1));
		System.out.println("1 != 0 = " + (1 != 0));
		
		/* ������ */
		System.out.println("true && true = " + (1 == 1 && 0 == 0));
		System.out.println("true || false = " + (1 == 1 && 1 == 0));
		System.out.println("true ^ false = " + (true ^ false));
		System.out.println("!true = " + !true);
		
		/* ����Ʈ ���� */
		System.out.println("1 << 1 = " + (1 << 1)); // 1�� �������� �� ��Ʈ�� �ű��.
		System.out.println("-2 >> 1 = " + (-2 >> 1)); // 2�� ���������� �� ��Ʈ�� �ű��. �� �ֻ��� ��Ʈ�� ��� �����ȴ�.
		System.out.println("-2 >>> 1 = " + (-2 >>> 1)); // 2�� ���������� �� ��Ʈ�� �ű��. �� �ֻ��� ��Ʈ�� �ű�� 0���� ���õȴ�.
		// -2 >>> 1 �� ��� 1����Ʈ ����, 1111 1110 �� ��Ʈ�� �Ű� 0111 1111�� �Ǿ� int�� MAX ���� ���Դ�.
	}
}
