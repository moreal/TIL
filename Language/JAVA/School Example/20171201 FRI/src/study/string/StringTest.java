package study.string;

import java.util.StringTokenizer;

public class StringTest {
	public static void main(String[] args)
	{
		
		// About String
		String s = new String("Hello World");

		s.replace('o', 's'); // s.replace 를 하면은 새로운 객체를 반환한다. 만약 이 레퍼런스(주소)를 받아두지 않고 s를 출력해보면 원래 객체는 변하지 않았음을 알 수 있다.

		System.out.println(s);
		
		// About StringBuffer
		StringBuffer sb = new StringBuffer("Hello World");
		
		sb.append(" - BY ME");
		
		System.out.println(sb); // toString을 호출해주지 않아도 자동으로 호출된다.
		
		// About StringTokenizer
		StringTokenizer st = new StringTokenizer("name=moreal&age=12", "&"); // 구분문자를 Delimiter 라고 말한다.
		
		while(st.hasMoreTokens()) // Token 과 Element의 차이점은??
			System.out.println(st.nextToken());
	}
}
