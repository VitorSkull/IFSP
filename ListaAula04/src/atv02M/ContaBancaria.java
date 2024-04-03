package atv02M;

public class ContaBancaria{
    int numeroConta;
    double saldo;

    void depositar(double valor){saldo = saldo + valor;}

    void sacar(double valor){
        try {
            if (saldo < valor) {
                throw new SaldoInsuficienteException("Saldo Insuficiente!");
            } else {
                saldo = saldo - valor;
                System.out.println("Saque realizado com sucesso!");
            }
        } catch (SaldoInsuficienteException e) {
           
        }
    }

    void verSaldo(){
        System.out.println("Saldo atual : " + saldo);
    }
}