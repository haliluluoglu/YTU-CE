package association2;

public class Car {
	private String plate;
	private Person owner;

	public Car(String plate) {
		this.plate = plate;
	}

	public Person getOwner() {
		return owner;
	}
	public String getPlate() {
		return plate;
	}
	public void setPlate(String plate) {
		this.plate = plate;
	}
	public void setOwner(Person owner) {
		this.owner = owner;
		if(owner.getCar()!=this)
		{
			owner.setCar(this);
		}
	}
	public String introduceSelf()
	{
		String info;
		info="[CAR] licence plate is " + getPlate();
		if(owner!=null)
		{
			info+=".My owner is " + getOwner();
		}
		return info;
	}

}
