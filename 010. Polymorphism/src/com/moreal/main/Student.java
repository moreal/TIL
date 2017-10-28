package com.moreal.main;

public class Student extends Person implements Study{

	@Override
	public void Book() {
		System.out.println("Study : 책");
	}

	@Override
	void role() {
		System.out.println("Person : 공부하기");
	}

}
