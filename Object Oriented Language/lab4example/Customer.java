package lab4example;

public abstract class Customer {
	private int iD;
	private String nameSurname;
	private int points;
	private int numberOfShopping;
	
	public Customer(int iD,String nameSurname,int points,int numberOfShopping)
	{
		this.iD=iD;
		this.nameSurname=nameSurname;
		this.points=points;
		this.numberOfShopping=numberOfShopping;
	}

	public int getiD() {
		return iD;
	}

	public String getNameSurname() {
		return nameSurname;
	}

	public int getPoints() {
		return points;
	}

	public int getNumberOfShopping() {
		return numberOfShopping;
	}
	
	public void setiD(int iD) {
		this.iD = iD;
	}

	public void setNameSurname(String nameSurname) {
		this.nameSurname = nameSurname;
	}

	public void setPoints(int points) {
		this.points = points;
	}

	public void setNumberOfShopping(int numberOfShopping) {
		this.numberOfShopping = numberOfShopping;
	}
	
	public abstract void updatePoints();

}
