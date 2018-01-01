package me.moreal.main;

public interface MobilePhone {
	public boolean sendCall();
	public boolean receiveCall();
	public boolean sendSMS();
	public boolean receiveSMS();
}

interface MP3 { // 클래스 다중 상속은 안되지만 인터페이스 다중 상속은 가능하다.
	public void stop();
	public void play();
}

class PDA {
	public int calculate(int x, int y) {
		return x + y;
	}
}