package lab4;

public class Student {
	private String id;
	private String name;
	private String surname;
	private int borrow;
	
	public Student(String id, String name, String surname, int borrow) 
	{
		this.id = id;
		this.name = name;
		this.surname = surname;
		this.borrow = borrow;
	}
	
	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getSurname() {
		return surname;
	}

	public void setSurname(String surname) {
		this.surname = surname;
	}

	public int getBorrow() {
		return borrow;
	}

	public void setBorrow(int borrow) {
		this.borrow = borrow;
	}


	public String toString() {
		String info = "Student [id=" + this.id + ", name=" + this.name + ", surname=" + this.surname + ", borrow=" + this.borrow + "]";
		return info;
	}

	
	
	

}