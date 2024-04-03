package atv04M;

public class Main {

	public static void main(String[] args) {
		Quadrado quadrado = new Quadrado(8);
		Circulo circulo = new Circulo(12);
		Retangulo retangulo = new Retangulo(19, 6);
		
		System.out.println("Calculo do perimetro de um quadrado: Lado * 4");
		quadrado.calcularPerimetro();
		
		System.out.println("Calculo da area de um quadrado: Lado * Lado");
		quadrado.calcularArea();
		
		System.out.println("Calculo do perimetro de um circulo: C = 2 * π * r");
		circulo.calcularPerimetro();
		
		System.out.println("Calculo da area de um circulo: A = π * r²");
		circulo.calcularArea();
		
		
		System.out.println("Calculo do perimetro de um retangulo: 2 * (base + altura)");
		retangulo.calcularPerimetro();
		
		System.out.println("Calculo da area de um retangulo: A=B*H");
		retangulo.calcularArea();
	}

}
