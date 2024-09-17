package atv04M;

public class Circulo implements FormaGeometrica {
	private double PI = 3.14159;
	private double raio;
	
	public Circulo(double raio) {
		this.raio = raio;
	}
	
	public void calcularPerimetro(){
		double perimetro;
		
		perimetro = 2 * PI * raio;
		
		System.out.println("Perimetro do circulo: " + perimetro);
	}
	
	public void calcularArea() {
		double area = PI * raio * raio;
		System.out.println("Area de um circulo: " + area);
	}
}
