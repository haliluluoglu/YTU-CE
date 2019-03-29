package lab2_1;

import java.util.ArrayList;

public class Plane {
	private String name;
	private ArrayList<Attendant> attendant;
	
	public Plane(String name)
	{
		this.name=name;
		this.attendant=new ArrayList<Attendant>();
	}
	public void addAttendant(Attendant attendant1)
	{
		this.attendant.add(attendant1);
	}
	public void introducePlane()
	{
		System.out.println("Plane name: " + this.getName());
		if(!attendant.isEmpty())
			for(Attendant at1 : this.attendant)
			{
				System.out.println(at1);
			}
	}
	public String 

}
