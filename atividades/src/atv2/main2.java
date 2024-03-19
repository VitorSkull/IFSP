package atv2;
import java.util.List;
import java.util.ArrayList;

public class main2 {

	public static void main(String[] args) {
		List<String> compras = new ArrayList<>();
		
		compras.add("Banana");
		compras.add("Maça");
		compras.add("Uva");
		compras.add("Laranja");
		compras.add("Limão");
		
		for(String itens : compras) {
			System.out.println(itens );
		}
		
		compras.remove(1);
		
		for(String itens : compras) {
			System.out.println(itens);
		}
	}
}
