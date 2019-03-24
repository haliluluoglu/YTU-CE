package association2;

public class Main {
	public static void main(String[] args)
	{
		Person halil = new Person("Halil Uluoglu");
		Car toros = new Car("34 HIU 34");
		Person ibrahim = new Person("Ibrahim Uluoglu");
		Car ferrari = new Car("36 HIU 36");
		
		halil.setCar(toros);
		System.out.println(halil.introduceSelf());
		ibrahim.setCar(ferrari);
		System.out.println(ibrahim.introduceSelf());
		//toros.setOwner(halil);
		System.out.println(toros.introduceSelf());
		//ferrari.setOwner(ibrahim);
		System.out.println(ferrari.introduceSelf());
		
		System.out.println("FINISH");
	}

}
