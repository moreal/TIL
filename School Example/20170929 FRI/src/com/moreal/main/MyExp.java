package com.moreal.main;

public class MyExp {
	int base;
	int value;
	
	public MyExp()
	{
		MyExp(1,0);
	}
	
	public MyExp(int base, int value)
	{
		this.base = base;
		this.value = value;
	}
	
	public MyExp(int base)
	{
		MyExp(base, 1);
	}

	public int getValue()
	{
		return value;
	}
	
	public int compute()
	{
		
	}
}
