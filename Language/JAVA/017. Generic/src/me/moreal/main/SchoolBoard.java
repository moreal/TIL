package me.moreal.main;

import me.moreal.person.Person;

public class SchoolBoard<T extends Person, N> {
	
	/*
	 * <E> for an element of a collection;
	 * <T> for type;
	 * <K, V> for key and value.
	 * <N> for number
	 * S,U,V, etc. for 2nd, 3rd, 4th type parameters
	 */
	
	T arr[] = null;
	
	public SchoolBoard() {
		arr = new T[20]; // generic type can't make array
	}
}
