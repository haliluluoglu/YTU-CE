package lab4example;

public class Standart extends Customer{
	
	public Standart(int iD,String nameSurname,int points,int numberOfShopping)
	{
		super(iD,nameSurname,points,numberOfShopping);
	}
	
	public void updatePoints() 
	{
		setPoints(getPoints()+getNumberOfShopping()*2);
	}
	

}
