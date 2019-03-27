package transportationSystem;

public abstract class Person {
	private int id,age;
	private double balance;
	private String name;
	
	public Person(int id, int age, double balance, String name) {
		this.id = id;
		this.age = age;
		this.balance = balance;
		this.name = name;
	}

	public int getId() {
		return id;
	}

	public int getAge() {
		return age;
	}

	public double getBalance() {
		return balance;
	}

	public String getName() {
		return name;
	}

	public void setId(int id) {
		this.id = id;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public void increaseAge()
	{
		this.age += 1;
	}
	
	public abstract void updateBalance();
	
	public void introduceSelf()
	{
		System.out.println("Id is " + id + " Name is " + name + " Age is " + age + " Balance is " + balance);
	}
	
}
