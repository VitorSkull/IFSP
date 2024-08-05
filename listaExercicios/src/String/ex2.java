package String;

public class ex2 {
    public static void main(String[] args) {
        
        String palavra = "teste";
        String vogais = "aeiouAEIOU";
        int contador = 0;
        
        for(int i = 0; i < palavra.length(); i++) {
            if(vogais.indexOf(palavra.charAt(i)) != -1) {
                contador++;
            }
        }
        
        System.out.println("numero de vogais: " + contador);
    }
}
