package exerc;


import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Main {
	public static void main(String[] args) {
		 Voo voo = new Voo(524, 5);
		 
		 ExecutorService executor = Executors.newFixedThreadPool(5);
		 
		 for(int i = 0; i < 15; i++) {
			 executor.submit(new Reserva(voo));
		 }
		 
		 executor.shutdown();
	}
}
