package hashmap1;

public class Main {
	
	public static void main(String[] args)
	{
		Course course = new Course("1", "Halil Course", 5);
		Student halil = new Student("16011093 ", "Halil Uluoglu");
		
		course.addStudent(halil);
		
		course.showClassList();
		
	}

}
