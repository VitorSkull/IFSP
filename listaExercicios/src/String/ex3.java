package String;

public class ex3 {
	public static void main(String[] args) {
		String palavra = "isto é uma palavra";
		char letra = 'z';
		for(int i = 0; i < palavra.length(); i++) {
			
			if(palavra.charAt(i) == letra) {
				System.out.println("Caractere encontrado!");
			}
			else {
				System.out.println("Caractere não encontrado.");
				break;
			}
		}
	}
}
