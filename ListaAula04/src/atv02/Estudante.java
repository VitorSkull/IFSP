package atv02;

public class Estudante {
	String nome;
	int idade;
	float nota;
	
	public Estudante(String nome, int idade, float nota) {
		this.nome = nome;
		this.idade = idade;
		this.nota = nota;
	}
	
	public boolean aprovado() {
		if(nota >= 7) {
			return true;
		}
		else {
			return false;
		}
	}
}
