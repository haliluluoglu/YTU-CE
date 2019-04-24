package lab4example;

public class Elite extends Customer{

	public Elite(int iD, String nameSurname, int points, int numberOfShopping) {
		super(iD, nameSurname, points, numberOfShopping);
	}
	
	public void updatePoints()
	{
		setPoints(getPoints()+getNumberOfShopping()*4);
	}

}
