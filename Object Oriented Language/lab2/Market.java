package lab2;

import java.util.ArrayList;

public class Market {
	private String name;
	private ArrayList<Basket> basket;
	
	public Market(String name)
	{
		this.name=name;
		basket = new ArrayList<Basket>();
	}
	public void addBasket(String name)
	{
		Basket basket1 = new Basket(name);
		basket.add(basket1);
	}
	public void identifyMarket()
	{
		System.out.println("Name of market: " + name + " Basket size: " + basket.size());
		for(Basket basket2 : basket)
		{
			basket2.identifyProduct();
		}
	}
	public Basket getBasket(String aBasket)
	{
		for(Basket basket2 : basket)
		{
			if(basket2.getName()==aBasket)
			{
				return basket2;
			}
		}
		return null;
	}
}
