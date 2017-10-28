package me.moreal.main;

public class ThisExample {
	public String title;
	public int uid;
	protected static int maxUid = 0;
	
	public ThisExample(String title, int uid)
	{
		this.title = title;
		this.uid = uid;
	}
	
	public ThisExample()
	{
		this("Unknown", ++maxUid);
	}
}
