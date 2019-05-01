package lab4;

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
	
	public void payBorrow(String id,double money){
        Student aStudent = findStudent(id);
        if(aStudent !=null)
        {
        	aStudent.setBorrow(aStudent.getBorrow()-money);
        }
    }
	
	public void addBorrow(double money){
        for(Student aStudent : students)
        {
        	aStudent.setBorrow(aStudent.getBorrow()+money);
        }
    }
	
	public void printList()
	{
		System.out.println("Students List");
		
		if(students.isEmpty())
		{
			System.out.println("List of students are empty.");
		}
		else
		{
			for(Student aStudent : students)
			{
				System.out.println(aStudent);
			}
			System.out.println("-----------------");
		}
	}

	public boolean addStudent(Student aStudent) throws OutOfCapacityExecption ,SameStudentException
	{

		if(students.size()>=this.size)
		{
			throw new OutOfCapacityExecption("[ERROR] Capacity is full!");
		}
		else if(findStudent(aStudent.getId())!=null)
		{
			throw new SameStudentException("[ERROR] Same student!");
		}
		else
		{
			students.add(aStudent);
			System.out.println(aStudent + "added.");
			this.size++;
		}
		return true;
	}
	
	public Student findStudent(String id)
	{
		for(Student aStudent : students)
		{
			if(aStudent.getId().compareTo(id)==0)
			{
				return aStudent;
			}
		}
		return null;
	}

	public boolean removeStudent(String id) throws BorrowMoneyException
	{
			Student aStudent = findStudent(id);
			if(aStudent != null)
			{
				if(!aStudent.checkBorrow())
				{
					throw new BorrowMoneyException("This student has borrow to dormitory.So, student can not remove.");
				}
				else
				{
					students.remove(aStudent);
				}
				return true;
			}
			return false;
	}
}
