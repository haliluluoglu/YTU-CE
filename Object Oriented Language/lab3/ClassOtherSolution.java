/*package lab3;

public class ClassOtherSolution {
	package lab3;

	import java.util.HashMap;

	public class Class {
		
		private HashMap<Integer, Student> student;
		
		public Class()
		{
			student = new HashMap<>();
		}
		
		public void addStudent(Student aStudent)
		{
			int i=0;
			while(student.containsKey(i))
			{
				i++;
			}
			student.put(i, aStudent);
		}
		
		public void removeStudent(int i)
		{
			student.remove(i);
		}
		
		public void identifyYourself()
		{
			int studentNumber=0;
			int i=0; 
			while(studentNumber<student.size())
			{
				if(student.containsKey(i))
				{
					System.out.println(i + "is full.");
					studentNumber++;
				}
				else
				{
					System.out.println(i + "is empty.");
				}
				i++;
			}
			System.out.println("--------------------------------");
	}


}*/
