package oop;

import java.util.LinkedList;

public class Shelf {
	LinkedList<Book> books;

	public Shelf()
	{
		this.books = new LinkedList<Book>();
	}
	public void AddBook(Book bkk)
	{
		this.books.add(bkk);
	}
	public Book RemovoBook(int index)
	{
		Book book;
		book = this.books.remove(index);
		return book;
	}
}
