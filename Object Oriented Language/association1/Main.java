package association1;

public class Main {
	public static void main(String[] args)
	{
		Car toros = new Car("34 HIU 34");
		Person person = new Person("Halil");
		person.setCar(toros);
		System.out.println(person.introduceSelf());
		Person person2 = new Person("Ibrahim");
		System.out.println(person2.introduceSelf());
		
	}

}
