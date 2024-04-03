package atv03;

public class Livro {
	String titulo;
	String autor;
	int anoDePublicacao;
	
	Livro(String titulo, String autor, int anoDePublicacao){
		this.titulo = titulo;
		this.autor = autor;
		this.anoDePublicacao = anoDePublicacao;
	}
	
	public void imprimirDetalhes() {
		System.out.println("Titulo: " + titulo);
		System.out.println("Autor: " + autor);
		System.out.println("Ano de Publicação: " + anoDePublicacao);
	}
}
