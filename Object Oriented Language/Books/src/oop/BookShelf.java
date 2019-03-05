package oop;

public class BookShelf {
	Shelf shelf[];
	
	public BookShelf(int shelfNumber)
	{
		shelf = new Shelf[shelfNumber];
		for(int i=0; i<shelfNumber; i++)
		{
			shelf[i] = new Shelf();
		}
	}
	public void AddBookToShelf(Book book)
	{
		shelf[book.getShelfNo()].AddBook(book);
	}
	public Book RemoveBookToShelf(Book book)
	{
		return shelf[book.getShelfNo()].RemovoBook(shelf[book.getShelfNo()].books.indexOf(book));
	}
	
	public Book SearchBook(String nameOfBook)
	{
		for(int i=0; i<shelf.length; i++)
		{
			for(Book book:shelf[i].books)
			{
				if(book.getBookName().compareTo(nameOfBook)==0)
					return book;				
			}
		}
		return null;
	}
	public boolean CheckShelf(int shelfNumber)
	{
		if(shelf[shelfNumber]!=null)
			return true;
		else
			return false;
	}
	public void PrintShelf(int shelfNumber)
	{
		System.out.println("-----" + shelfNumber + ". shelf...-----");
		for(int i=0; i<shelf[shelfNumber].books.size(); i++)
		{
			System.out.println("Book Name: " +  shelf[shelfNumber].books.get(i).getBookName());
			System.out.println("Authot Name: " + shelf[shelfNumber].books.get(i).getAuthorName());
			System.out.println("ISBN number: " + shelf[shelfNumber].books.get(i).getISBN());
			System.out.println("Rank No: " + shelf[shelfNumber].books.get(i).getRankNo());
		}
	}

}
