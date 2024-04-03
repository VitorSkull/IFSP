package atv04;

public class Main {
    public static void main(String[] args){
            ContaBancaria conta = new ContaBancaria();
            conta.saldo = 200;
            conta.numeroConta = 1;

            conta.depositar(10);
            conta.verSaldo();

            conta.sacar(100);
            conta.verSaldo();

    }
}
