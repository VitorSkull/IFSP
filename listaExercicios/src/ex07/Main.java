package ex07;

public class Main {
	public static void main(String[] args) {
		
		
		double num1 = 3, num2 = 4;
		
		num1 = Math.pow(num1, 2);
		num2 = Math.pow(num2, 2);
		
		
		double hipotenusa = num1 + num2;
		
		hipotenusa = Math.sqrt(hipotenusa);
		
		System.out.println("Valor da hipotenusa: " + hipotenusa);
	}
}
