package transportationSystem;

public class Student extends Person{

	public Student(int id, int age, int balance, String name) {
		super(id, age, balance, name);
	}
	public void updateBalance()
	{
		super.setBalance(super.getBalance()-1.25);
	}
}
