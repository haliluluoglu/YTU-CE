package composition1;

public class Car {
	private String plate;
	private Person owner;
	
	public Car(String plateNo, Person owner)
	{
		plate=plateNo;
		this.owner=owner;
	}
	public String getPlate()
	{
		return plate;
	}
	public void setPlate(String plate)
	{
		this.plate=plate;
	}
	public Person getOwner()
	{
		return owner;
	}
	public void setOwner(Person owner)
	{
		this.owner=owner;
	}
	public String introduceSelf()
	{
		String info="My plate number is " + getPlate();
		if(owner != null)
		{
			info += " and my owner is  " + owner.getName();
		}
		else
		{
			info+=" and I do not have any owner.";
		}
		return info;
	}
	
	

}
