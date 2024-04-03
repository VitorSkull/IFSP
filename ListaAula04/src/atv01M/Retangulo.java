package atv01M;

public class Retangulo extends Poligono {
    
    private double base;
    private double altura;

    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }
    
    @Override
    public void area() {
        double area = base * altura;
        System.out.println("Área do retângulo: " + area);
    }
}

