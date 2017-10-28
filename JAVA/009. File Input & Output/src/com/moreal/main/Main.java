package com.moreal.main;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;

import com.moreal.exception.NEFileCreateException;

public class Main {
	public static void main(String[] args) {
		String path = "C:\\Test\\Hello\\HelloWorld.txt";
		
		File f = new File(path);
		
		try {
			NoException.neFileCreateFile(f, 0);
		} catch (NEFileCreateException e1) {
			System.out.println(e1.getMsg());
			return;
		}
		System.out.println("File Created");

		try {
			FileOutputStream fis = new FileOutputStream(f); // File Ŭ���� Ȥ�� String ������ path�� ���� ������ �����մϴ�. Ȥ�� FileDescripter.
			
			System.out.println("Open Output Stream");
			
			fis.write("Hello".getBytes(), 0, "Hello".length());
			fis.close();
		} catch (IOException e) {
			System.out.println(e.getMessage());
		}

		while (true) {
			try {
				FileReader fr = new FileReader(f); // ������ �о���� FileReader ��ü�� �����մϴ�.
				BufferedReader br = new BufferedReader(fr); // FileReader�� BufferedFileReader�� ���Ѵ�.
				
				System.out.println("Read From " + f.getPath() + " : " + br.readLine());
				
				br.close();
				break;
			} catch (IOException e) {
				try {
					NoException.neFileCreateFile(f);
				} catch (NEFileCreateException e1) {
					System.out.println(e1.getMsg());
					return;
				}
			}
		}
	}
}
