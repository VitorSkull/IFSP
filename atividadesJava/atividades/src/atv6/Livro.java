package atv6;

public class Livro {
	private int paginas = 10;
	
	public void lerPagina(int paginas){
		
		if(paginas <= 0 || paginas > this.paginas) {
			throw new RuntimeException("Pagina não disponivel");
		}
		System.out.println("Você está lendo a página: " + paginas);
	}
}
