package atv04M;

public class Retangulo implements FormaGeometrica {
	private double base;
	private double altura;
	
	public Retangulo(double base, double altura) {
		this.base = base;
		this.altura = altura;
	}
	
	@Override
	public void calcularPerimetro() {
		double perimetro;
		
		perimetro = 2 * (base + altura);
		
		System.out.println("Perimetro de um retangulo: " + perimetro);
	}
	
	@Override
	public void calcularArea() {
        double area = base * altura;
        System.out.println("Área do retângulo: " + area);
	}
}
