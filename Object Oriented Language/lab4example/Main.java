package lab4example;

public class Main {

	public static void main(String[] args) {
		Customer customers[] = new Customer[4];
		
		customers[0] = new Standart(1, "Ali Ertas", 100, 10);
		customers[1] = new Standart(1, "Ayse Genc", 100, 15);
		customers[2] = new Elite(1, "Ahmet Yilmaz", 100, 20);
		customers[3] = new Elite(1, "Fatma Ozturk", 100, 25);
		
		BankManagement bank = new BankManagement();

		try
		{
			bank.addCustomer(customers[0]);
			bank.addCustomer(customers[1]);
			bank.addCustomer(customers[2]);
			bank.addCustomer(customers[3]);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			e.printStackTrace();
			System.err.println("[Error!] Out of bounds error.");
		}
	}
}
