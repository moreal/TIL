package me.moreal.main;

public class ArrayParameter {
	private static void replace(char[] src, char from, char to)
	{
		for(int i = 0; i < src.length; ++i)
			if(src[i] == from)
				src[i] = to;
	}
	
	static void replaceSpace(char[] src)
	{
		replace(src, ' ', ',');
	}
}
