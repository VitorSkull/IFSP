package atv03M;

public class Compromisso {
    private String data;
    private String hora;
    private String descricao;

    public Compromisso(String data, String hora, String descricao){
        this.data = data;
        this.hora = hora;
        this.descricao = descricao;
    }

    @Override
    public String toString() {
        return data + "-" + hora + "-" + descricao;
    }
}
