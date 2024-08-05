package ex12;

public class Main {
    public static void main(String[] args) {
        String strNumbers = "1,2,3,4,5";
        String[] numberArray = strNumbers.split(",");
        int soma = 0;

        for (String num : numberArray) {
            soma += Integer.parseInt(num);
        }

        System.out.println("soma total: " + soma);
    }
}
