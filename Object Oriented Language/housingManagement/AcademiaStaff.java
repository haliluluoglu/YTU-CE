package housingManagement;

public class AcademiaStaff extends Staff{
	private String degree;
	
	public AcademiaStaff(String id, String nameSurname,Apartment home,String degree)
	{
		super(id,nameSurname,home);
		this.degree=degree;
	}
	public void setDegree(String degree)
	{
		this.degree=degree;
	}
	public String getDegree()
	{
		return degree;
	}
	public void identifySelf()
	{
		System.out.println("My name and surname is " + super.getNameSurname() + ".My id number is: " + super.getId() + ".My door number is: " + super.getApartmentDoorNumber());
		System.out.println("My degree is: " + degree);
	}

}
