package lab2_1;

public class CrewMember extends Attendant{

	public CrewMember(int id, String nameSurname, double salary) {
		super(id, nameSurname, salary);
	}
	public void updateSalary()
	{
		this.setSalary(this.getSalary()*1.75);
	}
}
