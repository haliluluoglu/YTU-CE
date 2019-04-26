package lab4;

import java.io.IOException;
import java.util.ArrayList;



public class Dormitory {
	ArrayList<Student> students;
	private int size;
	
	public Dormitory(int size) {
		this.size=size;
		students = new ArrayList<>();
	}
	
	public int getSize() {
		return size;
	}

	public void printList()
	{
		for(Student aStudent : students)
		{
			System.out.println(aStudent);
		}
	}

	public void addStudent(Student aStudent) throws OutOfCapacityExecption ,SameStudentException
	{

		if(students.size()>=this.size)
		{
			System.out.println("heehe2");
			throw new OutOfCapacityExecption("[ERROR] Capacity is full!");
		}
		else
		{
			if(students.size()>0 && findStudent(aStudent.getId())==null)
			{
				System.out.println("heehe1");
				throw new SameStudentException("[ERROR] Same student!");
			}
			else
			{System.out.println("heehe");
				students.add(aStudent);
				
				this.size++;
			}
		}
		
		
		
	}
	
	public Student findStudent(String id)
	{
		for(Student aStudent : students)
		{
			if(aStudent.getId().equals(id))
			{
				return aStudent;
			}
		}
		return null;
	}
	
	public void payBarrow(String id,int barrow)
	{
		if(findStudent(id)!=null)
		{
			findStudent(id).setBorrow(findStudent(id).getBorrow()-barrow);
		}
	}
	
	public void addBarrow(int barrow)
	{
		for(Student aStudent : students)
		{
			aStudent.setBorrow(aStudent.getBorrow()+barrow);
		}
	}
	public void removeStudent(String id) throws BarrowMoneyException
	{
			if(findStudent(id)!=null)
			{
				if(findStudent(id).getBorrow()>0)
				{
					throw new BarrowMoneyException("[ERROR] Student owes money to dormitory!");
				}
				else
				{
					
				}
			}
		this.size--;
	}

}
