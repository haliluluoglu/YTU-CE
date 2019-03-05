package oop;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args)
	{
		int bookShelfNumber=5;
		
		BookShelf bookShelf = new BookShelf(bookShelfNumber);
		
		Book book1,book2,book3;
		
		book1 = new Book("The Alchemist", "Paulo Coelho" , "1234567890" , 1 , 1);
		book2 = new Book("Les Misérables", "Victor Hugo" , "1234567891" , 2 , 0);
		book3 = new Book("The Hitchhiker's Guide to the Galaxy", "Douglas Adams" , "1234567892" , 2 , 2);
		
		bookShelf.AddBookToShelf(book1);
		bookShelf.AddBookToShelf(book2);
		bookShelf.AddBookToShelf(book3);
		
		bookShelf.PrintShelf(1);
		bookShelf.PrintShelf(2);
		bookShelf.RemoveBookToShelf(book1);
		bookShelf.PrintShelf(2);
		
		Scanner input = new Scanner(System.in);
		int number;
		
		do
		{
			System.out.println("Enter shelf number, please.");
			number = input.nextInt();
		}while(!bookShelf.CheckShelf(number));
		
		bookShelf.PrintShelf(number);
		
		input.close();
		
	}
}
