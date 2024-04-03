package atv03M;

import java.util.List;

public class Main {

	public static void main(String[] args){

        Agenda agenda = new Agenda();

        agenda.addCompromisso("2010-10-10","10:00","concidencia");
        agenda.addCompromisso("2012-12-12","12:00", "almoco");

        System.out.println(agenda);

        String returnData = "2010-10-10";
        List<Compromisso> compromissosList = agenda.compromissosData(returnData);

        if(!compromissosList.isEmpty()){
            System.out.println("Compromisso para " + returnData + " :");
            for (Compromisso compromisso : compromissosList){
                System.out.println(compromisso);
            }
        }
        else {
            System.out.println("Sem compromissos pra " + returnData);
        }

    }
}
