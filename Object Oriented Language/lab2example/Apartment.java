package lab2example;

import java.util.ArrayList;

public class Apartment {
	private int doorNumber;
	private ArrayList<Room> rooms;
	
	public Apartment(int doorNumber)
	{
		this.doorNumber=doorNumber;
		
		Room r1 = new Room("Living Room");
		Room r2 = new Room("Bed Room");
		Room r3 = new Room("Kitchen");
		
		rooms = new ArrayList<Room>();
		
		rooms.add(r1);
		rooms.add(r2);
		rooms.add(r3);
		
	}
	public void setDoorNumber(int doorNumber)
	{
		this.doorNumber=doorNumber;
	}
	public int getDoorNumber()
	{
		return doorNumber;
	}
	
}
