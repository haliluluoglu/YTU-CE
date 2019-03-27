package lab2;

public class Food extends Product{
	
	public Food(int id,String productName,double price)
	{
		super(id,productName,price);
	}
	public void updatePrice()
	{
		setPrice(getPrice()*1.08);
	}
}
