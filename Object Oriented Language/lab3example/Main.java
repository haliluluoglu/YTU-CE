package lab3example;

public class Main {

	public static void main(String[] args) {
			Memory d = new Memory();
			Process pA = new Process("Process-A");
			Process pB = new Process("Process-B");
			Process pC = new Process("Process-C");
			Process pD = new Process("Process-D");
			
			
			d.addProcess(pA);
			d.addProcess(pB);
			d.addProcess(pC);
			d.addProcess(pD);
			
			d.identifyYourself();
			d.extractProcess(2); //2.ADRESTEN ÇIKAR
			d.identifyYourself();
			d.extractProcess(3);
			/*d.identifyYourself();
			d.extractProcess(1);
			d.identifyYourself();
			d.addProcess(pD);
			d.identifyYourself();
			d.addProcess(pB);
			d.identifyYourself();*/

	}

}
