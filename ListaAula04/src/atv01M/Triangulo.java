package atv01M;

public class Triangulo extends Poligono{
	
	private double base;
	private double altura;
	
	public Triangulo(double base, double altura) {
		this.base = base;
		this.altura = altura;
	}
	
	@Override
	public void area() {
		double area = (base * altura) / 2;
		System.out.println("Area de um circulo: " + area);
	}
}
