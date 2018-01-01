package study.string;

import java.util.StringTokenizer;

public class StringTest {
	public static void main(String[] args)
	{
		
		// About String
		String s = new String("Hello World");

		s.replace('o', 's'); // s.replace �� �ϸ��� ���ο� ��ü�� ��ȯ�Ѵ�. ���� �� ���۷���(�ּ�)�� �޾Ƶ��� �ʰ� s�� ����غ��� ���� ��ü�� ������ �ʾ����� �� �� �ִ�.

		System.out.println(s);
		
		// About StringBuffer
		StringBuffer sb = new StringBuffer("Hello World");
		
		sb.append(" - BY ME");
		
		System.out.println(sb); // toString�� ȣ�������� �ʾƵ� �ڵ����� ȣ��ȴ�.
		
		// About StringTokenizer
		StringTokenizer st = new StringTokenizer("name=moreal&age=12", "&"); // ���й��ڸ� Delimiter ��� ���Ѵ�.
		
		while(st.hasMoreTokens()) // Token �� Element�� ��������??
			System.out.println(st.nextToken());
	}
}
