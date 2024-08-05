package String;



public class ex1 {

	public static void main(String[] args) {
		
		
        String palavra = "ovo";
        String palavraReversa = "";
        
        for (int i = palavra.length(); i > 0; i--) {
        	
        	palavraReversa += palavra.charAt(i-1);
        }
        
        System.out.println(palavraReversa);
        
        if(palavra.equals(palavraReversa)) {
        	System.out.println("É um palíndromo");
        }
        else {
        	System.out.println("Não é um palíndromo");
        }
	}
}
