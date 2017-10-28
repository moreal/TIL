package com.moreal.main;

public class Food {
	public int getPrice(Type t)
	{
		return t.ordinal() * 2000; // ordinal 은 서수로서 Enum에서 적혀있는 인덱스 값을 반환합니다.
	}
	
	public String getTypes()
	{
		String temp = "{ ";
		for(Type type : Type.values()) // values()는 Type의 값들을 Type[]로 반환합니다.
			temp += type.name() + " "; // String 배열에 담아서 반환 해줄 것입니다.
		return temp + "}";
	}
	
	public enum Type{
		CHICKEN, MEAT, KIMCHI, RICE // 대소문자 무관한 듯 하지만 대문자로 하도록 하자
	}
}
