package lab2;

import java.util.ArrayList;

public class Basket {
	private String name;
	private ArrayList<Product> product;
	
	public Basket(String name)
	{
		this.name=name;
		product = new ArrayList<>();
	}
	public void addProduct(Product product1)
	{
		product.add(product1);
	}
	public void identifyProduct()
	{
		System.out.println("Basket name: " + name);
		for(Product product1 : product)
		{
			System.out.println(product1);
		}
	}
	public String getName()
	{
		return name;
	}

}
