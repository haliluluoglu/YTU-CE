package inheritance1;

public class Company {
	public static void main(String[] args)
	{
		Employee[] staff = new Employee[3];
		Manager boss = new Manager("Halil Uluoglu", 10000);
		boss.setBonus(1000);
		
		staff[0]=boss;
		staff[1] = new Employee("Steve Jobs", 4000);
		staff[2] = new Employee("Bill Gates", 3000);
		
		for(Employee employee : staff)
		{
			System.out.println("[NAME] " + employee.getName() + " [SALARY] " + employee.getSalary());
		}
	}
}
