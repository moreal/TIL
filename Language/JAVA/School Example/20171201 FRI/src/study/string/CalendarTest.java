package study.string;

import java.util.Calendar;

public class CalendarTest {
	public static void main(String[] args) throws InterruptedException
	{
		Calendar now = Calendar.getInstance(); // Calendar �� �߻� Ŭ�����̴�.
		
		//now.set(2013, 4, 10, 10, 5, 2);
		
		for(int i = 0; i < 1000; ++i)
		{
			System.out.println(Calendar.getInstance().get(Calendar.SECOND));
			Thread.sleep(1000);
		}
	}
}
