package atv02;

public class Main {

	public static void main(String[] args) {

		Estudante aluno1 = new Estudante("Antonio", 45, 8);
		Estudante aluno2 = new Estudante("Vitor", 19, 4);
		
		System.out.println("Situacao de Antonio: " + aluno1.aprovado());
		System.out.println("Situacao de Vitor: " + aluno2.aprovado());
	}

}
