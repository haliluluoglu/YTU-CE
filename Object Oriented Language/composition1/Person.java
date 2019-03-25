package composition1;

public class Person {
	private String name;
	private Car car;
	
	public Person(String name)
	{
		this.name=name;
	}
	public String getName()
	{
		return name;
	}
	public Car getCar()
	{
		return car;
	}
	public void setCar(Car car)
	{
		this.car=car;
	}
	public String intorduceSelf()
	{
		String info;
		info = "My name is " + getName();
		if(car != null)
		{
			info += " and I have a car.Plate is " + car.getPlate();
		}
		else
		{
			info+=" and I do not have any car.";
		}
		return info;
	}
	

	
}
