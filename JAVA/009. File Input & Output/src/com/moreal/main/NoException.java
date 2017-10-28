package com.moreal.main;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

import com.moreal.exception.NEFileCreateException;

public class NoException {
	
	public static boolean neFileCreateFile(File f, int i) throws NEFileCreateException
	{
		if(i == 10)
			throw new NEFileCreateException("FileCreateError : ", 1);
		
		try {
			f.createNewFile();
		} catch (IOException e1) { // 입출력 상에 문제가 있을 경우
			if(f.getParentFile().mkdirs() == false)
			{
				System.out.print("I guess there is other problem, Give me the other Location : ");
				Scanner scan = new Scanner(System.in);
				f = new File(scan.next());
				scan.close();
			}
			
			neFileCreateFile(f, ++i);
		}
		return true;
	}
	
	public static boolean neFileCreateFile(File f) throws NEFileCreateException
	{
		return neFileCreateFile(f, 0);
	}
}
