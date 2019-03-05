package oop;

public class Book {
	private String bookName;
	private String authorName;
	private String ISBN;
	private int shelfNo;
	private int rankNo;
	
	public Book(String bookName, String authorName, String ISBN, int shelfNo, int rankNo) {
		super();
		this.bookName = bookName;
		this.authorName = authorName;
		this.ISBN = ISBN;
		this.shelfNo = shelfNo;
		this.rankNo = rankNo;
	}
	public String getBookName() {
		return bookName;
	}
	public String getAuthorName() {
		return authorName;
	}
	public String getISBN() {
		return ISBN;
	}
	public int getShelfNo() {
		return shelfNo;
	}
	public int getRankNo() {
		return rankNo;
	}
}
