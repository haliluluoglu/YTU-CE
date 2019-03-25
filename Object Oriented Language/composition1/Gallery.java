package composition1;

public class Gallery {
	private String galleryName;
	private Car[] cars;
	private int carCount;
	private Person galleryOwner;

	
	public Gallery(String galleryName, Person galleryOwner)
	{
		this.galleryName=galleryName;
		this.galleryOwner=galleryOwner;
		carCount=0;
		cars = new Car[30];
	}
	public String getGalleryName()
	{
		return galleryName;
	}
	public void setGalleryName(String galleryName)
	{
		this.galleryName=galleryName;
	}
	public boolean addCar(Car aCar)
	{
		if(!(searchCar(aCar)) && (carCount<cars.length))
		{
			cars[carCount]=aCar;
			carCount++;
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean searchCar(Car aCar)
	{
		for(Car car : cars)
		{
			if(car==aCar)
			{
				return true;
			}
		}
		return false;
	}
	public Car searchCar(String plate)
	{
		for(int i=0; i<carCount; i++)
		{
			if(cars[i].getPlate().compareTo(plate)==0)
			{
				return cars[i];
			}
		}
		return null;
	}
	public Car removeCar(String plate)
	{
		for(int i=0; i<carCount; i++)
		{	
			if(searchCar(plate) != null)
			{
				Car theCar=searchCar(plate);
				for(int j=i; j<carCount; j++)
				{
					cars[j]=cars[j+1];
				}
				cars[carCount]=null;
				return theCar;
			}
		}
		return null;
	}
	public boolean sellCar(String plate, Person newOwner)
	{
		Car soldCar=removeCar(plate);
		if(soldCar != null)
		{
			soldCar.setOwner(newOwner);
			addCar(soldCar);
			return true;
		}
		return false;
	}
	
	public String introduceSelf()
	{
		String info="Gallery Name is " + getGalleryName();
		info+=".The gallery owner is " + galleryOwner.getName();
		info+=".Car numbers are " + carCount;
		System.out.println("These are car plates and owners...");
		for(int i=0; i<carCount; i++)
		{
			System.out.println((i+1)+". car plate is  " + cars[i].getPlate()+ " and owner is " + cars[i].getOwner().getName());
			System.out.println();
		}
		return info;
	}

}
