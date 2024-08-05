package ex05;

public class Main {
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder("Teste");
		
		System.out.println(sb.toString());
		
		String vogais = "aeiouAEIOU";
		for(int i = sb.length() - 1; i >= 0; i--) {
			char charAtual = sb.charAt(i);
			
			if(vogais.indexOf(charAtual) != -1) {
				sb.deleteCharAt(i);
			}
		}
		
		System.out.println("StringBuilder sem as vogais: " + sb.toString());
	}
}
