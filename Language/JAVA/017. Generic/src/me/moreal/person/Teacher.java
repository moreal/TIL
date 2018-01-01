package me.moreal.person;

public class Teacher extends Person {
	String school;
	
	public Teacher(int age, String name, String school) {
		super(age, name);
		this.school = school;
	}
}
