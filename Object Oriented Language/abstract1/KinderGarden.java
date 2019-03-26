package abstract1;

public class KinderGarden {
	private Child[] children;
	private int childCount;
	
	public KinderGarden(int maxChild)
	{
		children = new Child[maxChild];
		childCount=0;
	}
	
	public boolean addChild(Child aChild)
	{
		if((childCount!=children.length)||(aChild!=null))
		{
			children[childCount]=aChild;
			childCount++;
			return true;
		}
		return false;
	}
	public String findOldestChild()
	{
		Child oldest = children[0];
		for(int i=1; i<childCount; i++)
		{
			if(children[i].getAgeInMonths() > oldest.getAgeInMonths())
				oldest=children[i];
		}
		return oldest.getName();
	}
	

}
