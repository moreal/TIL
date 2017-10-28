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
			FileOutputStream fis = new FileOutputStream(f); // File 클래스 혹은 String 형태의 path를 통해 생성이 가능합니다. 혹은 FileDescripter.
			
			System.out.println("Open Output Stream");
			
			fis.write("Hello".getBytes(), 0, "Hello".length());
			fis.close();
		} catch (IOException e) {
			System.out.println(e.getMessage());
		}

		while (true) {
			try {
				FileReader fr = new FileReader(f); // 파일을 읽어오는 FileReader 객체를 생성합니다.
				BufferedReader br = new BufferedReader(fr); // FileReader를 BufferedFileReader로 감싼다.
				
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
