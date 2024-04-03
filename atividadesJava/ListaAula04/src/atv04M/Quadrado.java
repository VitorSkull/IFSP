package atv04M;

public class Quadrado implements FormaGeometrica {
	
	private double lado;
	
	public Quadrado(double lado) {
		this.lado = lado;
	}
	
	@Override
	public void calcularPerimetro() {
		
		double perimetro;
		
		perimetro = lado * 4;
		
		System.out.println("Perimetro do quadrado: " + perimetro);
	}
	
	@Override
	public void calcularArea() {
		double area;
		
		area = lado * lado;
		
		System.out.println("Area do quadrado: " + area);
	}
}
