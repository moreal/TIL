package com.moreal.main;

public class MyExp {
	int base;
	int value;
	
	public MyExp()
	{
		this(1,0);
	}
	
	public MyExp(int base, int value)
	{
		this.base = base;
		this.value = value;
	}
	
	public MyExp(int base)
	{
		this(base, 1);
	}

	public int getValue()
	{
		return value;
	}
}
