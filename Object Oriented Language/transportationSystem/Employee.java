package transportationSystem;

public class Employee extends Person{

	public Employee(int id, int age, double balance, String name) {
		super(id, age, balance, name);
	}
	public void updateBalance()
	{
		super.setBalance(super.getBalance()-2.5);
	}
}
