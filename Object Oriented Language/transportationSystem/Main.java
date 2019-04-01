package transportationSystem;

public class Main {
		public static void main(String[] args)
		{
			Person[] people = new Person[4];
			
			people[0] = new Student(123456789, 19, 100, "Halil Uluoglu");
			people[1] = new Employee(123456780, 26, 200, "Steve Jobs");
			people[2] = new Retired(1234567891, 75, 1000, "Albert Einstein");
			people[3] = new Student(1234567892, 15, 150, "Aziz Sancar");
			
			for(Person person: people)
			{
				person.introduceSelf();
			}
			System.out.println("First get on");
			for(Person person : people)
			{
				person.updateBalance();
				person.introduceSelf();
			}
			
			System.out.println("Update the ages");
			for(int i=0; i<3; i++)
			{
				people[i].increaseAge();
				if((people[i].getAge()>=20)&&(people[i].getAge()<60))
					people[i] = new Employee(people[i].getId(), people[i].getAge(), people[i].getBalance(), people[i].getName());
				else if(people[i].getAge()>=60)
					people[i] = new Retired(people[i].getId(), people[i].getAge(), people[i].getBalance(), people[i].getName());
				else
					System.out.println("DEAD");
			}	
			System.out.println("Second get on");
			for(Person person: people)
			{
				person.updateBalance();
				person.introduceSelf();
			}
		}
}
