
public class Main {
	class Person {
		String name = null;
			
		public Person(String name) {
			this.name = name;
		}

		public String toString() {
			return "Name is " + name;
		}
	}
		
	class None {}
	
	public static void main(String args[])
	{
		Person p = new Person("Admin");
		System.out.println(new None());
		System.out.println(p);
		return;
	}
}
