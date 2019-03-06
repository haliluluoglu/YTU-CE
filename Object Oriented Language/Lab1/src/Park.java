import java.util.ArrayList;

public class Park {
	String nameOfPark;
	int capasity;
	
	ArrayList<Car> place; 
	Park()
	{
		
	}
	public Park(String nameOfPark, int capasity) {
		this.nameOfPark = nameOfPark;
		this.capasity = capasity;
		place = new ArrayList<Car>();
	}
	public int AddCar(Car car)
	{	
		if(capasity!=5)
		{
			place.add(car);
			capasity--;
		}
		else
		{
			System.out.println("Park is full");
		}
		return place.size();
	}
	public void RemoveCar(Car car)
	{
		int capasity=this.capasity;	
		if(capasity!=0)
		{
			place.remove(car);
			capasity++;
			this.capasity = capasity;
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
	public int getCapasity() {
		return capasity;
	}
	public void setNameOfPark(String nameOfPark) {
		this.nameOfPark = nameOfPark;
	}
	public void setCapasity(int capasity) {
		this.capasity = capasity;
	}
}
