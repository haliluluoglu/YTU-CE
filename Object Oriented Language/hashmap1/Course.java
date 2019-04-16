package hashmap1;

import java.util.HashMap;

public class Course {
	private String code;
	private String name;
	private int capacity;
	
	private HashMap<String,Student> students;
	
	public Course(String code,String name,int capacity)
	{
		this.code=code;
		this.name=name;
		this.capacity=capacity;
		students = new HashMap<String,Student>();
	}

	public String getCode() {
		return code;
	}

	public String getName() {
		return name;
	}

	public int getCapacity() {
		return capacity;
	}
	
	public int getStudentCount()
	{
		return students.size();
	}
	
	public boolean addStudent(Student aStudent)
	{
		if(getStudentCount()==this.capacity)
		{
			if(findStudent(aStudent.getNumber())!=null)
				return false;
		}
		students.put(aStudent.getNumber(),aStudent);
		return true;
	}
	
	public Student findStudent(String number)
	{
		return students.get(number);
	}
	
	public void increaseCapacity(int newCapacity)
	{
		if(newCapacity<=capacity)
		{
			return;
		}
		this.capacity=newCapacity;
	}
	
	public void showClassList()
	{
		System.out.println("Class List of" + code + " " + name);
		System.out.println("Student# Name, Surname");
		
		for(Student aStudent : students.values())
		{
			System.out.println(aStudent.getNumber()+ "" + aStudent.getName());
		}
	}
	
	
	

}
