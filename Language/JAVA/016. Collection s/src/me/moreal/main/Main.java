package me.moreal.main;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Vector;

public class Main {
	public static void main(String args[])
	{
		Vector<Integer> v = new Vector<Integer>();
		v.add(0); // Auto Boxing "int" into "Integer"
		v.add(-13);
		
		ArrayList<Integer> arr = new ArrayList<Integer>();
		arr.add(13);
		
		// Vector is similar with ArrayList
		// Actually their function is same; but there is a difference thing.
		// Vector support synchronization. But ArrayList is not.
		// So we have to use Vector , when we use multi-Thread
		
		// If you want to get collection's length(size), you can use size() method
		System.out.println(String.format("%d %d", v.size(), arr.size()));
		
		// Also you can search its elements. There are two ways to do it.
		// First way
		System.out.println("Vector Search : 1");
		for(int i = 0; i < v.size(); ++i)
			System.out.println(v.get(i));
		
		// Second Way using Iterator
		System.out.println("Vector Search : 2");
		Iterator<Integer> it = v.iterator();
		while(it.hasNext())
			System.out.println(it.next());
		
		// We can use Iterator with Vector, ArrayList, ...
		// But Iterator is slower than the way that use size() method
		// So I prefer first way :D
	}
}
