import java.util.*;
public class Test {

	public static void main(String[] args) {	
		/*System.out.println("Hello world!");
		Scanner input = new Scanner(System.in);	
		System.out.println("Enter a number.");
		int number = input.nextInt();
		input.close();
		System.out.println("Your number: " + number);
		System.out.println("Double number: " + (2*number));
		
		
		String[] cities= {"Istanbul", "Ankara", "Izmir", "Kars"};
		
		for(String city:cities)
			System.out.println(city);*/
		
		/*Car car1 = new Car("34 HU 34 " , "Tesla " , 2019);
		car1.identifyYourSelf();
		
		Car car2 = new Car();
		car2.identifyYourSelf();
		car2.setPlate("36 HIU 36 ");
		car2.identifyYourSelf();
		System.out.println("Get plate: " + car2.getPlate());*/
		
		Car car1 = new Car("34 HU 34 " , "Tesla " , 2019);
		Car car2 = new Car("34 HU 34 " , "Ferrari " , 1000);
		Car car3 = new Car("34 HU 34 " , "BMW " , 5000);
		Car car4 = new Car("34 HU 34 " , "Toros " , 2030);
		Park park1 = new Park("Halil Park" , 0);
		
		int temp;
		park1.AddCar(car1);
		park1.AddCar(car2);
		temp = park1.AddCar(car3);
		park1.AddCar(car4);
		
		park1.identify();
		System.out.println("First------------");
		park1.RemoveCar(car3);
		park1.identify();
		System.out.println(temp);
		System.out.println("SECOND------------");
		park1.AddCar(car3);
		park1.identify();
		System.out.println(temp);
	}
}
