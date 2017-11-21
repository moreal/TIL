package me.moreal.upcastDowncast;

public class Main {
	public static void main(String[] args) {
		// Case 1
		Person p = new Student();
		Student s;

		s = (Student) p;

		s.grade = "A";

		System.out.println(s.grade);

		// Case 2
		p = new Person();
		s = (Student) p;

		s.grade = "B";

		System.out.println(s.grade);
	}
}

class Person {
	int age;
}

class Student extends Person {
	String grade;
}