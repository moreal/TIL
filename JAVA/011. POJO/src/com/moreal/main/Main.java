package com.moreal.main;

public class Main {
	public static void main(String[] args)
	{
		 /*
		  * POJO에 대해서 알아보도록 하겠다.
		  */
		
		/*
		 * POJO 는 Plain Old Java Object 의 약자입니다.
		 * EJB를 개선하기 위해 나온 개발 모델.
		 * 
		 * EJB 1.0의 비전은 "애플리케이션 개발자들은 로우레벨의 기술에 관심을 가질 필요도 없다"였다고 한다.
		 * 
		 * -- POJO 정리 --
		 * 1. 특정 규약(contract)에 종속되지 않는다. (Java 언어와 꼭 필요한 API 외에 종속되지 않는다.)
		 * 2. 특정 환경에 종속되지 않는다.
		 * 3. 객체지향원리에 충실해야 한다.
		 * 
		 * -- 왜 사용해야 하는가 -- 
		 * 1. 코드의 간결함 (비즈니스 로직과 특정환경/low 레벨 을 분리 => 간결)
		 * 2. 자동화 테스트에 유리
		 * 3. 객체지향적 설계의 자유로운 사용
		 * 
		 * -- POJO 프레임워크 --
		 * EJB의 장점이였던 로우레벨의 접근 없이 라는 것을 다시 찾기 위해 생긴 프레임 워크
		 * 
		 * -- JavaBeans (직렬화 된 POJO) --
		 * 멤버변수를 보호하기 위해 게터세터를 통해 멤버 변수에 접근 하기로 합니다. // 게터 세터
		 */
		
		Person p = new Person(0, "Moreal");
		
		// 게터 세터만을 사용해서 변수에 접근한다.
		System.out.println("Before Age : " + p.getAge());
		
		p.setAge(10);
		
		System.out.println("After Age : " + p.getAge());
		System.out.println("Name : " + p.getName());
	}
}
