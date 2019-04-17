package lab3;

import java.util.HashMap;

public class Class {
	private int size;
	
	private HashMap<Integer, Student> student;
	
	public Class()
	{
		student = new HashMap<>();
		this.size=size;
	}
	
	public void addStudent(Student aStudent)
	{
		int i=0;
		while(student.get(i)!=null)
		{
			i++;
		}
		student.put(i, aStudent);
		this.size++;
	}
	
	public void removeStudent(int i)
	{
		student.remove(i);
		System.out.println(i + " extracted from the hashmap.");
		int j=0; 
		int count=0;
		for(j=0; j<size; j++)
		{
			if(student.get(j)!=null)
			{
				count=j;
				count++;
			}
		}
		this.size=count;
		
	}
	
	public void identifyYourself()
	{
		for(int i=0; i<size; i++)
		{	
			if(student.get(i)==null)
			{
				System.out.println(i + " is empty.");
			}
			else
			{
				System.out.println(i + " is full.");
			}
			
		}
		System.out.println("--------------------------------");
	}

}
