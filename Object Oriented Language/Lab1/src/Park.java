import java.util.ArrayList;

public class Park {
	String nameOfPark;
	int capacity;
	
	ArrayList<Car> place; 
	
	public Park(String nameOfPark, int capacity) {
		this.nameOfPark = nameOfPark;
		this.capacity = capasity;
		place = new ArrayList<Car>();
	}
	public int AddCar(Car car)
	{	
		if(capacity!=5)
		{
			place.add(car);
			capacity--;
		}
		else
		{
			System.out.println("Park is full");
		}
		return place.size();
	}
	public void RemoveCar(Car car)
	{
		int capacity=this.capacity;	
		if(capasity!=0)
		{
			place.remove(car);
			capacity++;
			this.capacity = capacity;
		}
		else
		{
			System.out.println("Park is already empty");
		}
	}
	
	public void identify()
	{
		for(Car car: place)
		{
			car.identifyYourSelf();
		}
	}	
	public boolean isItEmpty()
	{
		if(capasity==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public String getNameOfPark() {
		return nameOfPark;
	}
	public int getCapacity() {
		return capacity;
	}
	public void setNameOfPark(String nameOfPark) {
		this.nameOfPark = nameOfPark;
	}
	public void setCapacity(int capacity) {
		this.capacity = capacity;
	}
}
