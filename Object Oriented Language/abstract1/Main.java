package abstract1;

public class Main {

	public static void main(String[] args) {
		Child halil = new Child("Halil", 12);
		Child ibrahim = new Child("Ibrahim", 5);
		
		Toy pen = new Toy("0123456", "Toy pen", 10);
		Toy saw = new Toy("0123457", "Dangerous saw", 100);
		
		Clothing apron = new Clothing("01234568", "Baby apron", 2, 10);
		Clothing pants = new Clothing("01234569", "Pants", 10, 12);
		
		if(pen.isSuitable(halil))
			System.out.println("This is suitable for Halil.");
		else
			System.out.println("This is not suitable for Halil.");
		
		if(saw.isSuitable(halil))
			System.out.println("This is suitable for Halil.");
		else
			System.out.println("This is not suitable for Halil.");
		
		if(apron.isSuitable(halil))
			System.out.println("This is suitable for Halil.");
		else
			System.out.println("This is suitable for Halil.");
		
		KinderGarden kinderGarden = new KinderGarden(5);
		
		kinderGarden.addChild(halil);
		kinderGarden.addChild(ibrahim);
		
		System.out.println("The oldest child is: " + kinderGarden.findOldestChild());
	}

}
