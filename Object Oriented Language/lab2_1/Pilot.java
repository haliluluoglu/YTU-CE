package lab2_1;

public class Pilot extends Attendant{
	public Pilot(int id, String nameSurname, double salary)
	{
		super(id,nameSurname,salary);
	}
	public void updateSalary()
	{
		this.setSalary(this.getSalary()*1.25);
	}
}
