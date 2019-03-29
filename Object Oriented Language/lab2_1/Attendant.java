package lab2_1;

public abstract class Attendant {
	private int id;
	private String nameSurname;
	private double salary;
	
	public Attendant(int id, String nameSurname, double salary)
	{
		this.id=id;
		this.nameSurname=nameSurname;
		this.salary=salary;
	}
	public double getSalary()
	{
		return salary;
	}
	public void setSalary(double salary)
	{
		this.salary=salary;
	}
	public abstract void updateSalary();
	public String toString()
	{
		return "id: " + this.id + "Name and Surname: " + this.nameSurname + "Salary: " + this.salary;
	}

}
