package lab3;

public class Test {

    public static void main(String[] args) {
        ClassOtherSolution d = new ClassOtherSolution();
        Student pA = new Student("11011001");
        Student pB = new Student("11011002");
        Student pC = new Student("11011003");
        Student pD = new Student("11011004");
  
        d.addStudent(pA);
        d.addStudent(pB);
        d.addStudent(pC);
        d.addStudent(pD);
        
        d.identifyYourself();
        d.removeStudent(2);
        d.identifyYourself();
        d.removeStudent(3);
        d.identifyYourself();
        d.removeStudent(1);
        d.identifyYourself();
        d.addStudent(pD);
        d.identifyYourself();
        d.removeStudent(0);
        d.identifyYourself();
        d.addStudent(pC);
        d.identifyYourself();        
    }
}
