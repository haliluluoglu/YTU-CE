package lab3example;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;

public class Memory {
	private HashMap<Integer, Process> memory;
	private Queue<Integer> queue;
	
	public Memory()
	{
		memory = new HashMap<>();
		queue = new LinkedList<Integer>();
	}
	
	public HashMap<Integer, Process> getMemory() {
		return memory;
	}

	public Queue<Integer> getQueue() {
		return queue;
	}

	public Process findProcess(String name)
	{
		return memory.get(name);
	}
	
	public boolean addProcess(Process aProcess)
	{
		if(findProcess(aProcess.getName())!=null)
		{
			if(queue.isEmpty()==true)
			{
				memory.put(memory.size()+1, aProcess );
				return true;
			}
			else
			{
				memory.put(queue.peek(), aProcess);
				queue.remove(queue.peek());
			}
		}
		return false;
	}
	
	public void extractProcess(int number)
	{
		if(memory.containsKey(number)!=true)
		{
				memory.remove(number);
				System.out.println(number + "extracted from map.");
				queue.add(number);
		}
		else
		{
			System.out.println("This is not valid process!");
		}
	}
	public void identifyYourself()
	{
		System.out.println("EMPTY PLACES: ");
		for(int i=0; i<queue.size(); i++)
		{
			if(queue.isEmpty()!=true)
			{
				System.out.println("" + queue.offer(i));
			}
			
		}
		System.out.println("FILLED PLACES: ");
		for(int j=0; j<memory.size(); j++)
		{
			System.out.println(memory.hashCode() + "->" + memory.values() + "number in process");
		}
		
	}
	
}


