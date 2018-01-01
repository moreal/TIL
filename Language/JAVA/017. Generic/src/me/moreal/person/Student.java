package me.moreal.person;

public class Student extends Person {
	String school;
	public Student(int age, String name, String school) {
		super(age, name);
		this.school = school;
	}
}