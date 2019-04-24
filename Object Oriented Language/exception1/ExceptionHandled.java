package exception1;

public class ExceptionHandled {
	
	public static void main(String[] args)
	{
		int students[] = {1,2,3,4,5};
		System.out.println("Hello World.");
		
		try
		{
			int temp = students[students.length+1];
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			e.printStackTrace();
			System.out.println("[ERROR]! You reached the size of array!");
		}
		finally
		{
			System.out.println("Good By World.");
		}
	}

}
