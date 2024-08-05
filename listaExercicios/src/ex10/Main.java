package ex10;
import java.util.ArrayList;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		
		List<String> palavrasString = List.of("1", "2", "3", "4", "5");
		
		ArrayList<Integer> palavrasInt = new ArrayList<>();
		
		for(String string : palavrasString) {
				int numero = Integer.parseInt(string);
				palavrasInt.add(numero);
		}
		
		System.out.println("Lista de inteiros: " + palavrasInt);
	}
}
