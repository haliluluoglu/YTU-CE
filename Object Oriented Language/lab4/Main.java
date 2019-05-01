package lab4;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        Dormitory dormitoryManagement = new Dormitory(3);
        
        Student std1=new Student("1", "Ahmet", "ÖZ", 1000);
        Student std2=new Student("2","Ahmet","BOZ",1500);
        Student std3=new Student("3", "Ayşe", "TEZ", 2000);
        Student std4=new Student("4", "Ali", "OZTURK", 1500);
        Student std5=new Student("5", "Mehmet", "ÖZ", 1000);
        
        System.out.println("BÖLÜM 1 ************************************"); 
        dormitoryManagement.printList();
        try{
            dormitoryManagement.addStudent(std1);
            dormitoryManagement.addStudent(std2);
            dormitoryManagement.addStudent(std3);
            dormitoryManagement.addStudent(std4);
        }
        catch(OutOfCapacityExecption kp)
        {
        	kp.printStackTrace();
        	System.err.println(kp.toString());
        	
        }
        catch(SameStudentException aid)
        {
        	aid.printStackTrace();
        	System.err.println(aid.toString());
        }
        finally
        {
        	System.out.println("Students added to the system.");
        }
        System.out.println(dormitoryManagement.getSize());
        System.out.println("BÖLÜM 2 ************************************");
        dormitoryManagement.printList();
        dormitoryManagement.payBorrow("2",1500);
        try
        {
            dormitoryManagement.removeStudent("2");
            dormitoryManagement.removeStudent("1");
        }
        catch(BorrowMoneyException br)
        {
            System.err.println(br.toString());
        }

        System.out.println("BÖLÜM 3 ************************************");       
        dormitoryManagement.payBorrow("1", 1000);
        try
        {
            dormitoryManagement.removeStudent("1");
        }
        catch(BorrowMoneyException br)
        {
            System.err.println(br.toString());
        }
        
        System.out.println("BÖLÜM 4 ************************************");
        dormitoryManagement.addBorrow(1000);
        dormitoryManagement.printList();     
        try
        {
            dormitoryManagement.addStudent(std5);
        }
        catch(OutOfCapacityExecption | SameStudentException kp){
            System.err.println(kp.toString());
        }
        
        System.out.println("BÖLÜM 5 ************************************");
        dormitoryManagement.printList();
        try{
            dormitoryManagement.addStudent(std3);
        }
        catch(OutOfCapacityExecption | SameStudentException kp){
            System.err.println(kp.toString());
        }
    }   
}
