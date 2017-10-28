package com.moreal.main;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.Reader;
import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		/* Input */
		
		// java.util.Scanner 을 통한 입력
		Scanner scanner = new Scanner(System.in).useDelimiter("\\s|-"); // 공백문자, 혹은 -을 구분 문자로 사용하게 된다.
		System.out.println("You wrote : " + scanner.next()); // 본래 공백만이 구분 문자로 인식하고 있었지만 이제는 - 또한 구분 문자로 사용될 것이다.
		
		// InputStream 을 통한 입력
		InputStream InStream = System.in; // InStream 에 표준입출력 System.in 을 참조하게 끔 합니다. 
		BufferedInputStream bfInStream = new BufferedInputStream(InStream); // System.in 을 둘러싼 BufferInputStream 을 생성합니다.
		
		InputStreamReader Reader = new InputStreamReader(bfInStream); // BufferedInputStream은 InputStream의 요소를 모두 상속하고 있습니다. 그래서 자료형이 달라도 InputStream 위치에 들어갈 수 있는 것입니다.
		BufferedReader bfReader = new BufferedReader(Reader); // Reader를 감싸는 bfReader를 생성합니다.
		
		try {
			System.out.println(bfReader.readLine());
			bfReader.mark(3); // mark 메소드는 읽올 지점을 지정하여 줍니다.
			System.out.println("" + bfReader.read() + " " + bfReader.read());
			bfReader.reset(); // 읽어서 혹은 mark메소드에 의해 바뀐 지점을 초기화 해줍니다.
		} catch (IOException e) {
			System.out.println("There was a problem about IO");
		}
		
		/* Output */
		System.out.println("Output");
		
		OutputStreamWriter output = new OutputStreamWriter(System.out);
		
		try {
			output.write("Output setting\n"); // 스트림에 데이터를 쌓아둡니다.
			output.flush(); // 쌓여있던 스트림의 데이터를 한번에 출력해주는 듯 합니다.
		} catch (IOException e) {
			System.out.println("There was a problem ablut IO");
		}
	}
}
