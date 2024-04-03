package atv04;

public class ContaBancaria{
    int numeroConta;
    double saldo;

    void depositar(double valor){saldo = saldo + valor;}

    void sacar(double valor){
        saldo = saldo - valor;
    }

    void verSaldo(){
        System.out.println("Saldo atual : " + saldo);
    }
}