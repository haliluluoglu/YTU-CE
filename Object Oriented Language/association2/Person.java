package association2;

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
		if(car.getOwner()!=this)
		{
			car.setOwner(this);
		}
	}
	public String introduceSelf()
	{
		String info;
		info="[PERSON] Hello my name is " + getName();
		if(car!=null)
		{
			info+=".I have a car and its plate number is " + car.getPlate() + ".";
		}
		return info;
	}

}
