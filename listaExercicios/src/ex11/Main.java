package ex11;

import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> integerList = List.of(1, 2, 3, 4, 5);
        int soma = 0;

        for (int num : integerList) {
            soma += num;
        }

        double media = (double) soma / integerList.size();

        System.out.println("Soma: " + soma);
        System.out.println("Media: " + media);
    }
}

