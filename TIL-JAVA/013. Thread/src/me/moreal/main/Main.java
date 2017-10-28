package me.moreal.main;

public class Main extends Thread {
	/*
	 * 기본적으로 프로그램은 절차적인 개념을 지닌다.
	 * 코드가 짜여져 있는 순서대로 실행되는 것이다.
	 * 허나 이를 극복 하는 것이 있다.
	 * 
	 * Thread라는 것이 C언어에 있었다.
	 * 스레드는 같은 프로세스내에서 같은 자원을 사용하여 동시 실행한다.
	 * 
	 * Thread 참고 사항 (	https://ko.wikipedia.org/wiki/POSIX , https://ko.wikipedia.org/wiki/유닉스_신호  )
	 * 
	 * Thread를 사용하면 프로세스를 좀 더 효율적으로 사용할 수 있다.
	 * 
	 * Thread는 Runnable 인터페이스를 상속하여 사용하는 듯 하다.
	 * 
	 * Thread.start() : run 에서 짜 놓은 것들을 실행하는 구역이다.
	 * Thread.join() : 해당 스레드가 종료 될때 까지 대기한후 다음 명령문을 실행한다. 
	 * Thread.isAlive() : 스레드의 작동 여부를 체크한다.
	 * Thread.wait() : 
	 * 
	 * synchronized 키워드 : 한 자원에 동시에 여러 객체가 접근 할 수 없도록 한다. 락을 건다.
	 * 
	 * 메소드 앞에 synchronized 를 붙이거나 부분을 넣기 위해서는 synchronized (락을 걸 개체){} 로 넣어줄 수 있다.
	 * 
	 * 
	 */
	
	public static void main(String args[]) throws InterruptedException
	{
		System.out.println("SleepThread Test Start");
		
		SleepThread s;
		WaitThread w;
	
		for (int i = 0; i < 5; ++i)
		{
			s = new SleepThread(i);
			try {
				s.start();
				s.join(); 
			} catch (InterruptedException e) {
				System.out.println("Interrupt Exception :: " + i);
			}
		}
		System.out.println("SleepThread Test End\n\n");
		
		System.out.println("WaitThread Test Start");
		
		w = new WaitThread();
		
		w.start(); // wait 하면 모니터링 권한 포기. 취득할때 걸리는 시간이 존재.

		sleep(500); // 모니터링 권한 취득 시간 테스트.
		
		synchronized (w) { // Main 객체에서 먼저 w 의 모니터링 권한을 가져감.
			w.notify(); // IllegalMonitorStateException 모니터링의 소유자가 아닌 경우. 해당 객체의 권한이 이 객체에 없을 경우 발생.그래서 synchronized 처리
		}
		
		sleep(500);
		
		System.out.println("Hello " + w.isAlive());
		
		System.out.println("WaitThread Test End");
	}
}
