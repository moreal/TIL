package study.string;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListTest {
	public static void main(String[] args)
	{
		ArrayList<String> array = new ArrayList<String>();
		
		Scanner scan = new Scanner(System.in);
		for(int i = 0; i < 5; ++i)
			array.add(scan.nextLine());
		
		int maxIndex = 0;
		for(int i = 1; i < 5; ++i)
			if(array.get(maxIndex).length() < array.get(i).length())
				maxIndex = i;
		
		System.out.println("Longest String is " + array.get(maxIndex));
	}
}
