
public class Car {
	private String plate;
	private String model;
	private int modelYear;
	
	Car(String plate, String model, int modelYear)
	{
		this.plate=plate;
		this.model=model;
		this.modelYear=modelYear;
	}
	public void identifyYourSelf()
	{
		System.out.println("Plate: " + plate + "Model: " + model + "Model year: " + modelYear);
	}
	public String getPlate() {
		return plate;
	}
	public void setPlate(String plate) {
		this.plate = plate;
	}
	public String getModel() {
		return model;
	}
	public void setModel(String model) {
		this.model = model;
	}
	public int getModelYear() {
		return modelYear;
	}
	public void setModelYear(int modelYear) {
		this.modelYear = modelYear;
	}
}
