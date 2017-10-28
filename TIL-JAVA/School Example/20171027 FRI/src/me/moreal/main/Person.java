package me.moreal.main;

public class Person {
	public String name;
	public int age;
	public Person(String[] s)
	{
		name = s[0];
		s[0] = "Hello";
	}
	
	public void setAge(MyInt i)
	{
		age = i.val;
		i.val ++;
	}
}
