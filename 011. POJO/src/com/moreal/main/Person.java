package com.moreal.main;

public class Person {
	private int age;
	private String name;
	
	public Person(int age, String name)
	{
		this.age = age;
		this.name = name;
	}
	
	void setAge(int age)
	{
		this.age = age;
	}
	
	int getAge()
	{
		return age;
	}
	
	void setName(String name)
	{
		this.name = name;
	}
	
	String getName()
	{
		return name;
	}
	
}
