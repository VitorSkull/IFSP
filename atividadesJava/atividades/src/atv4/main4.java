package atv4;

public class main4 {
	public static void main(String[] args) {
		instrumentoMusical violao = new Violao();
		instrumentoMusical piano = new Piano();
		
		violao.afinar();
		violao.tocar();
		
		piano.afinar();
		piano.tocar();
	}
}
