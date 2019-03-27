package lab2example;

public abstract class Staff {
	private String id,nameSurname;
	private Apartment home;
	
	public Staff(String id,String nameSurname,Apartment home)
	{
		this.id=id;
		this.nameSurname=nameSurname;
		this.home=home;
	}
	public String getId()
	{
		return id;
	}
	public String getNameSurname()
	{
		return nameSurname;
	}
	public abstract void identifySelf(); 
	
	public int getApartmentDoorNumber()
	{
		return home.getDoorNumber();
	}
}
