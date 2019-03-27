package lab2example;

public class Main {
	public static void main(String[] args)
	{
		Apartment[] apartment = new Apartment[3];
		
		apartment[0] = new Apartment(1);
		apartment[1] = new Apartment(2);
		apartment[2] = new Apartment(3);
		
		AdminStaff admin = new AdminStaff("123456789", "Halil Uluoglu", 10, apartment[0]);
		AcademiaStaff teacher1 = new AcademiaStaff("123456780", "Yunus Emre Selçuk", apartment[1], "Yrd. Dç.");
		AcademiaStaff teacher2 = new AcademiaStaff("1234567891", "Ibrahim Onur Sigirci", apartment[2], "Arþ. Gör.");
		
		admin.identifySelf();
		teacher1.identifySelf();
		teacher2.identifySelf();
	}
}
