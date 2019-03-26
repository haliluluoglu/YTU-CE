package abstract1;

public class Child {
	private final String name;
	private int ageInMonths;
	
	public Child(String name, int ageInMonths) {
		this.name = name;
		this.ageInMonths = ageInMonths;
	}
	public String getName() {
		return name;
	}
	public int getAgeInMonths() {
		return ageInMonths;
	}
	public void setAgeInMonths(int ageInMonths) {
		this.ageInMonths = ageInMonths;
	}
}
