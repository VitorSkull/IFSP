package atv03M;

import java.util.ArrayList;
import java.util.List;

public class Agenda {
    private List<Compromisso> compromissos;

    public Agenda(){
        this.compromissos = new ArrayList<>();
    }

    public void addCompromisso(String data, String hora, String descricao){
        Compromisso compromisso = new Compromisso(data, hora, descricao);
        compromissos.add(compromisso);
    }

    public List<Compromisso> compromissosData(String data){
        List<Compromisso> compromissoList = new ArrayList<>();
        for (Compromisso compromisso : compromissos){
            if(compromisso.toString().startsWith(data)){
                compromissoList.add(compromisso);
            }
        }
        return compromissoList;
    }

    @Override
    public String toString() {
        if (compromissos.isEmpty()){
            return "Agenda esta vazia";
        }

        StringBuilder agendaStr = new StringBuilder("Agenda :\n");
        for (Compromisso compromisso : compromissos){
            agendaStr.append(compromisso.toString()).append("\n");
        }

        return agendaStr.toString();
    }
}
