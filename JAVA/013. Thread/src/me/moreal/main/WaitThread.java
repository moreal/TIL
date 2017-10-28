package me.moreal.main;

public class WaitThread extends Thread {
	
	public void run()
	{
		synchronized(this)
		{
			System.out.println("Run Start");
			try {
				wait();
				System.out.println("Wait End :: " + this.getName());
			} catch (InterruptedException e) {
				System.out.println(this.getName() + " :: Interrupt Exception");
			}
		}
	}
	
}
