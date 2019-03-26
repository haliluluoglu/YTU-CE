package abstract1;

public class Clothing extends Item{
	private int minMonthLimit,maxMonthLimit;
	
	public Clothing(String barcode, String description, int minMonthLimit, int maxMonthLimit)
	{
		super(barcode, description);
		this.maxMonthLimit=maxMonthLimit;
		this.minMonthLimit=minMonthLimit;
	}
	public boolean isSuitable(Child aChild)
	{
		if((aChild.getAgeInMonths() >= minMonthLimit)&&(aChild.getAgeInMonths()<=maxMonthLimit))
			return true;
		return false;
	}

}
