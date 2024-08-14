package exerc;

public class Voo {
	int numVoo, capacidadeTotal, assentosReservados = 0;
	
	public Voo(int numVoo, int capacidadeTotal){
		this.numVoo = numVoo;
		this.capacidadeTotal = capacidadeTotal;
	}
	
	public synchronized boolean reservarAssento() {
		if(capacidadeTotal > 0) {
			capacidadeTotal--;
			assentosReservados++;
			return true;
		}
		else{
			return false;
		}
	}
	
	public synchronized int getAssentosDisponiveis() {
		return capacidadeTotal - assentosReservados;
	}
	
	public int getNumVoo() {
		return numVoo;
	}
}
