package me.moreal.main;

public class Main extends PDA implements MobilePhone, MP3 {
	
	public static void main(String[] args) {

		// 인터페이스는 객체 생성 불가
		// 하지만 레퍼런스 변수는 선언 가능하다.
		// 상수 선언만 가능하다(final)
		
		/*
		 * 인터페이스를 이용하여 다중 상속 구현
		 * 인터페이스 간에도 상속가능
		 */
		
		Main m = new Main();
		
		m.sendCall();
		m.sendSMS();
		
		m.receiveCall();
		m.receiveSMS();
		
		m.stop();
		
		/*
		 * 자바 패키지
		 * java.lang : 자동으로 import 된다.
		 * java.util :
		 * java.io : 
		 * java.awt :
		 * javax.swing :
		 * 
		 * Object 클래스를 모두 포함중이다.
		 */
	}

	@Override
	public void stop() {
		System.out.println("재생 종료");
	}

	@Override
	public void play() {
		System.out.println("음악 재생");
	}

	@Override
	public boolean sendCall() {
		System.out.println("전화 발신");
		return false;
	}

	@Override
	public boolean receiveCall() {
		System.out.println("전화 수신");
		return false;
	}

	@Override
	public boolean sendSMS() {
		System.out.println("SMS 발신");
		return false;
	}

	@Override
	public boolean receiveSMS() {
		System.out.println("SMS 수신");
		return false;
	}
}
