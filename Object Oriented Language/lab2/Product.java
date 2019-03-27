package lab2;

public abstract class Product{
	private int id;
	private String productName;
	private double price;
	
	public Product(int id,String productName, double price)
	{
		this.id = id;
		this.productName=productName;
		this.price=price;
	}
	
	public Double getPrice()
	{
		return price;
	}
	public void setPrice(Double price)
	{
		this.price=price;
	}
	public abstract void updatePrice();
	
	public String toString()
	{
		String info;
		info="Id: " + id + " Product name: " + productName + " Price: " + price;
		return info;
	}
	

}
