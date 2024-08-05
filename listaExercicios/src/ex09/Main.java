package ex09;

public class Main {
	public static void main(String[] args) {
		int[] numArray = {10, 40, 70, 30};
		int aux = 0, max = 0;
		
		for(int i = 0; i < numArray.length; i++) {
			
			max = Math.max(aux, numArray[i]);
			aux = max;
			
		}
		
		System.out.println(max);
	}
}
