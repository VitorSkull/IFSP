package atv01;


public class Main {
	public static void main(String[] args) {
		Calculadora cal = new Calculadora();
		double n1, n2;
		
		n1 = 10.4;
		n2 = 20;
		
		System.out.println("Soma : " + cal.somar(n1, n2));
		System.out.println("Subtracao : " + cal.subtrair(n1, n2));
		System.out.println("Multiplicar : " + cal.multiplicar(n1, n2));
		System.out.println("Divisao : " + cal.dividir(n1, n2));
	    }
}