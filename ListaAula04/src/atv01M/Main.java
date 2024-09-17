package atv01M;

public class Main {

	public static void main(String[] args) {

		Retangulo retangulo = new Retangulo(15, 8);
		Circulo circulo = new Circulo(9);
		Triangulo triangulo = new Triangulo(8, 13);
		
		
		System.out.println("Calculo da area de um retangulo: A=B*H");
		retangulo.area();
		
		System.out.println("Calculo da area de um circulo: A = π * r²");
		circulo.area();
		
		System.out.println("Calculo da area de um triangulo: A = A=(B*H)/2");
		triangulo.area();
	}

}
