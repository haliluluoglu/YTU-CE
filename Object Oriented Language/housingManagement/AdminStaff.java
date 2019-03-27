package housingManagement;

public class AdminStaff extends Staff{
	private int yearOfService;

	public AdminStaff(String id, String nameSurname, int yearOfService,Apartment home)
	{
		super(id, nameSurname,home);
		this.yearOfService = yearOfService;
	}

	public int getYearOfService() {
		return yearOfService;
	}

	public void setYearOfService(int yearOfService) {
		this.yearOfService = yearOfService;
	}
	public void identifySelf()
	{
		System.out.println("My name and surname is " + super.getNameSurname() + ".My id number is: " + super.getId() + ".My door number is: " + super.getApartmentDoorNumber());
		System.out.println("My year of services is: " + getYearOfService());
	}
	
	
}
