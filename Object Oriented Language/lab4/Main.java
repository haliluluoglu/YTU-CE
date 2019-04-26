package lab4;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        Dormitory dormitoryManagement = new Dormitory(3);
        
        Student std1=new Student("1", "Ahmet", "�Z", 1000);
        Student std2=new Student("2","Ahmet","BOZ",1500);
        Student std3=new Student("3", "Ay�e", "TEZ", 2000);
        Student std4=new Student("4", "Ali", "OZTURK", 1500);
        Student std5=new Student("5", "Mehmet", "�Z", 1000);
        
        System.out.println("B�L�M 1 ************************************"); 
        dormitoryManagement.printList();
        try{
            dormitoryManagement.addStudent(std1);
            dormitoryManagement.addStudent(std2);
            dormitoryManagement.addStudent(std3);
            dormitoryManagement.addStudent(std4); // kapasite dolu istisna  
        }
        catch(OutOfCapacityExecption kp)
        {
        	//kp.printStackTrace();
        	System.err.println(kp.toString());
        	
        }
        catch(SameStudentException aid)
        {
        	//aid.printStackTrace();
        	System.err.println(aid.toString());
        }
        finally
        {
        	System.out.println("Students added to the system.");
        }
        System.out.println(dormitoryManagement.getSize());
        System.out.println("// B�L�M 2 ************************************");
        dormitoryManagement.printList(); // 1, 2, 3 yazacak
        dormitoryManagement.payBarrow("2",1500);
        try
        {
            dormitoryManagement.removeStudent("2");//listeden çıkar
            dormitoryManagement.removeStudent("1");//istisna olacak
        }
        catch(BarrowMoneyException br)
        {
            System.err.println(br.toString());
        }

        // BÖLÜM 3 ************************************       
        dormitoryManagement.payBarrow("1", 1000);
        try
        {
            dormitoryManagement.removeStudent("1");
        }
        catch(BarrowMoneyException br)
        {
            System.err.println(br.toString());
        }
        
        // BÖLÜM 4 ************************************
        dormitoryManagement.addBarrow(1000);
        dormitoryManagement.printList(); // 3 yazacak        
        try
        {
            dormitoryManagement.addStudent(std5);// 5 eklenecek
        }
        catch(OutOfCapacityExecption | SameStudentException kp){
            System.err.println(kp.toString());
        }
        
        // BÖLÜM 5 ************************************
        dormitoryManagement.printList();
        try{
            dormitoryManagement.addStudent(std3); // ID istisna olacak
        }
        catch(OutOfCapacityExecption | SameStudentException kp){
            System.err.println(kp.toString());
        }
    }   
}
