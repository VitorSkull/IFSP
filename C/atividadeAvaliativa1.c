#include <stdio.h>

int main(void) {
  
  int nEstudantes, x;
  

  printf("Numero de estudantes: ");
  scanf("%d", &nEstudantes);

  float nota1[nEstudantes], nota2[nEstudantes];
  float faltas[nEstudantes], presenca[nEstudantes];
  float media[nEstudantes];
  float aulasFreq, totalDeAulas = 80;
  int estudante[nEstudantes];
  int abaixoDaMedia = 0, reprovados = 0;
  float mediaGeral = 0.0, mediaGeralTrue = 0, maiorNota2 = 0.0;
  
  for(int i = 0; i < nEstudantes; i++){
    printf("\nNota 1: ");
    scanf("%f", &nota1[i]);

    printf("\nNota 2: ");
    scanf("%f", &nota2[i]);

    printf("\nFaltas: ");
    scanf("%f", &faltas[i]);

    media[i] = (0.4 * nota1[i]) + (0.6 * nota2[i]);
    aulasFreq = 80 - faltas[i];
    presenca[i] = aulasFreq / 80 * 100;

    mediaGeral = mediaGeral + media[i];
    
    
    if (nota2[i] > maiorNota2) {
      maiorNota2 = nota2[i];
    }
      if(media[i] < 6){

        abaixoDaMedia = abaixoDaMedia + 1;
      }
        if(presenca[i] < 75.00){

          reprovados = reprovados + 1;
        }
    mediaGeralTrue = mediaGeral / nEstudantes;

}
  do{
  printf("\nO que deseja ver?\n");
  printf("1 - Dados do Aluno\n");
  printf("2 - Quantidade de alunos fora da media\n");
  printf("3 - Quantidade de alunos reprovados por falta\n");
  printf("4 - Media geral da turma\n");
  printf("5 - Maior nota 2\n");
  printf("6 - Sair\n");
  scanf("%d", &x);

    switch(x){

      case 1 :
      for(int j = 0; j < nEstudantes; j++){

      printf("\nEstudante %d\n", j);
      printf("Média: %.2f\n", media[j]);
      printf("Presença: %.2f%%\n", presenca[j]);
      printf("Faltas: %.f\n\n", faltas[j]);
      }
       break;

      case 2:
        printf("\nAlunos abaixo da media: %d\n", abaixoDaMedia);
        break;
       
      case 3:
        printf("Alunos reprovados por falta: %d\n", reprovados);
        break;
       
      case 4:
       printf("Medial geral da turma: %.2f\n", mediaGeralTrue);
       break;

      case 5:
        printf("Maior nota 2: %.2f\n", maiorNota2);
        break;
      case 6:
       break;

       default:
       break;
    }
  }  while(x < 6);
  

  return 0;
}