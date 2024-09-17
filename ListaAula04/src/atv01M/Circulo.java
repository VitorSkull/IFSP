package atv01M;

public class Circulo extends Poligono {
	
	private double PI = 3.14159;
	private double raio;
	
	public Circulo(double raio) {
		this.raio = raio;
	}
	
	@Override
	public void area() {
		double area = PI * raio * raio;
		System.out.println("Area de um circulo: " + area);
	}
}
