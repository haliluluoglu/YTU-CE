package transportationSystem;

public class Retired extends Person{

	public Retired(int id, int age, double balance, String name) {
		super(id, age, balance, name);
	}
	public void updateBalance()
	{
		super.setBalance(super.getBalance()-0.5);
	}
}
