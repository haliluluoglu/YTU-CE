package inheritance1;

public class Manager extends Employee{
	private int bonus;
	
	public Manager(String name, int salary)
	{
		super(name, salary); //THIS IS OVERRIDING.
		bonus=0;
	}
	public Manager(String name, int salary, int bonus)
	{
		super(name, salary); //THIS IS OVERLOADING.
		this.bonus=bonus;	
	}
	public void setBonus(int bonus)
	{
		this.bonus=bonus;
	}
	public int getSalary()
	{
		return super.getSalary() + bonus;
	}

}
