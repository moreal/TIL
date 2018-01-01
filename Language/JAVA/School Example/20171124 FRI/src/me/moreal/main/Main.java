package me.moreal.main;

public class Main extends PDA implements MobilePhone, MP3 {
	
	public static void main(String[] args) {

		// �������̽��� ��ü ���� �Ұ�
		// ������ ���۷��� ������ ���� �����ϴ�.
		// ��� ���� �����ϴ�(final)
		
		/*
		 * �������̽��� �̿��Ͽ� ���� ��� ����
		 * �������̽� ������ ��Ӱ���
		 */
		
		Main m = new Main();
		
		m.sendCall();
		m.sendSMS();
		
		m.receiveCall();
		m.receiveSMS();
		
		m.stop();
		
		/*
		 * �ڹ� ��Ű��
		 * java.lang : �ڵ����� import �ȴ�.
		 * java.util :
		 * java.io : 
		 * java.awt :
		 * javax.swing :
		 * 
		 * Object Ŭ������ ��� �������̴�.
		 */
	}

	@Override
	public void stop() {
		System.out.println("��� ����");
	}

	@Override
	public void play() {
		System.out.println("���� ���");
	}

	@Override
	public boolean sendCall() {
		System.out.println("��ȭ �߽�");
		return false;
	}

	@Override
	public boolean receiveCall() {
		System.out.println("��ȭ ����");
		return false;
	}

	@Override
	public boolean sendSMS() {
		System.out.println("SMS �߽�");
		return false;
	}

	@Override
	public boolean receiveSMS() {
		System.out.println("SMS ����");
		return false;
	}
}
