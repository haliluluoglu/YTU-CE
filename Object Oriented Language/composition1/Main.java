package composition1;

public class Main {
	public static void main(String[] args)
	{
		Person aziz=new Person("Aziz Sancar");
		Car ferrari=new Car("34 AS 34", aziz);
		Person orhan=new Person("Orhan Pamuk");
		Car bmw=new Car("34 OP 34", orhan);
		Person oktay=new Person("Oktay Sinanoglu");
		Car porsche=new Car("34 OS 34", oktay);
		
		Person halil=new Person("Halil Uluoglu");
		Gallery fanCar = new Gallery("FanCar", halil);
		
		fanCar.addCar(ferrari);
		fanCar.addCar(bmw);
		fanCar.addCar(porsche);
		aziz.setCar(ferrari);
		ferrari.setOwner(aziz);
		
		
		System.out.println(fanCar.introduceSelf());
		System.out.println(aziz.intorduceSelf());
		System.out.println(orhan.intorduceSelf());
		
		orhan.setCar(bmw);
		System.out.println(orhan.intorduceSelf());
	}

}
