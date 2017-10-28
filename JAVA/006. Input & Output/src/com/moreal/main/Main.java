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
		
		// java.util.Scanner �� ���� �Է�
		Scanner scanner = new Scanner(System.in).useDelimiter("\\s|-"); // ���鹮��, Ȥ�� -�� ���� ���ڷ� ����ϰ� �ȴ�.
		System.out.println("You wrote : " + scanner.next()); // ���� ���鸸�� ���� ���ڷ� �ν��ϰ� �־����� ������ - ���� ���� ���ڷ� ���� ���̴�.
		
		// InputStream �� ���� �Է�
		InputStream InStream = System.in; // InStream �� ǥ������� System.in �� �����ϰ� �� �մϴ�. 
		BufferedInputStream bfInStream = new BufferedInputStream(InStream); // System.in �� �ѷ��� BufferInputStream �� �����մϴ�.
		
		InputStreamReader Reader = new InputStreamReader(bfInStream); // BufferedInputStream�� InputStream�� ��Ҹ� ��� ����ϰ� �ֽ��ϴ�. �׷��� �ڷ����� �޶� InputStream ��ġ�� �� �� �ִ� ���Դϴ�.
		BufferedReader bfReader = new BufferedReader(Reader); // Reader�� ���δ� bfReader�� �����մϴ�.
		
		try {
			System.out.println(bfReader.readLine());
			bfReader.mark(3); // mark �޼ҵ�� �п� ������ �����Ͽ� �ݴϴ�.
			System.out.println("" + bfReader.read() + " " + bfReader.read());
			bfReader.reset(); // �о Ȥ�� mark�޼ҵ忡 ���� �ٲ� ������ �ʱ�ȭ ���ݴϴ�.
		} catch (IOException e) {
			System.out.println("There was a problem about IO");
		}
		
		/* Output */
		System.out.println("Output");
		
		OutputStreamWriter output = new OutputStreamWriter(System.out);
		
		try {
			output.write("Output setting\n"); // ��Ʈ���� �����͸� �׾ƵӴϴ�.
			output.flush(); // �׿��ִ� ��Ʈ���� �����͸� �ѹ��� ������ִ� �� �մϴ�.
		} catch (IOException e) {
			System.out.println("There was a problem ablut IO");
		}
	}
}
