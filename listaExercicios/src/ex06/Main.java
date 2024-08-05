package ex06;

public class Main {
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder("Java");
		StringBuilder sb2 = new StringBuilder("Script");
		
		
		sb.insert(4, sb2.toString());
		
		System.out.println(sb.toString());
		
	}
}
