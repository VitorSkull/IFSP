package exerc;

public class Reserva implements Runnable{

	private final Voo voo;
	
	public Reserva(Voo voo) {
		this.voo = voo;
	}
	@Override
	public void run() {
		boolean sucesso = voo.reservarAssento();
		if(sucesso) {
			System.out.println(Thread.currentThread().getName() + ": Reserva realizada no voo: "+ voo.getNumVoo());
		}
		else {
			System.out.println(Thread.currentThread().getName() + ": Falha ao realizar a reserva no voo: "+ voo.getNumVoo());
		}
	}
}
