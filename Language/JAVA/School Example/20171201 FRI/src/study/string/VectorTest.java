package study.string;

import java.util.Vector;

public class VectorTest {
	public static void main(String[] args)
	{
		Vector<Point> vec = new Vector<Point>();
		vec.add(new Point(12, 10));
		vec.add(new Point(12, -45));
		
		for(int i = 0; i < vec.size(); ++i)
			System.out.println(vec.get(i));
	}
}

class Point {
	private int x, y;
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public String toString() {
		return "(" + x + "," + y + ")";
	}
}