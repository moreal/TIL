package com.moreal.main;

import java.util.Scanner;

public class Main {
	public static void main(String args[])
	{
		Question3_7();
		Question3_8();
	}
	
	public static void Question3_7()
	{
		System.out.println("\nStart of Question3_7");
		Scanner scan = new Scanner(System.in);
		
		int[] Array = new int[5];
		int max = 0x80000001;
		
		for(int i = 0; i < 5; ++i)
		{
			Array[i] = scan.nextInt();
			max = max < Array[i] ? Array[i] : max;
		}
		
		System.out.println(max);
		
		scan.close();
	}
	
	public static void Question3_8()
	{
		System.out.println("\nStart of Question3_8");
		Scanner scan = new Scanner(System.in);
		
		int Array[] = new int[5];
		int sum = 0;
		
		for(int i = 0; i < Array.length; ++i)
		{
			Array[i] = 0;
			scan.nextInt();
			System.out.println(Array[i]);
			sum += Array[i];
		}
		
		System.out.println((double) sum / Array.length);
		
		scan.close();
	}
	
	/* For each ¹® for (Type var : Array) Çü½Ä*/
	
	public static void Question3_9()
	{
		int[] array = { 1, 2, 3, 4, 5 };
		int sum = 0;
		
		for(int i : array)
			sum+=i;
		
		System.out.println("ÇÕÀº " + sum);
		
		String[] Food = {"»ç°ú", "±è¹ä", "°í±â", "»§"};
		
		System.out.print("Food: ");
		for(String name : Food)
			System.out.print(name + " ");	
	}
}
