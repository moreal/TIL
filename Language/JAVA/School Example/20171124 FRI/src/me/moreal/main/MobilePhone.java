package me.moreal.main;

public interface MobilePhone {
	public boolean sendCall();
	public boolean receiveCall();
	public boolean sendSMS();
	public boolean receiveSMS();
}

interface MP3 { // Ŭ���� ���� ����� �ȵ����� �������̽� ���� ����� �����ϴ�.
	public void stop();
	public void play();
}

class PDA {
	public int calculate(int x, int y) {
		return x + y;
	}
}