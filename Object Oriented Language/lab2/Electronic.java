package lab2;

public class Electronic extends Product{
	
	public Electronic(int id,String productName, double price)
	{
			super(id,productName,price);
	}
	public void updatePrice()
	{
		setPrice(getPrice()*1.18);
	}
}
