package me.moreal.main;

public class SleepThread extends Thread {

	private int num;

	@Override
	public void run() {
		for (int t = 0; t < 5; ++t) {
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				System.out.println("Thread" + num);
			}
			System.out.println("Hello World :: " + num + " :: " + t);
		}
	}

	public SleepThread(int i) {
		num = i;
	}
}
