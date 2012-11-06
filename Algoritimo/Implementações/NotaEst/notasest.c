#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int total, alunos, nota;
  int contApr, contRep, contExa;
  float media;
  
  total = alunos = contApr = contRep = contExa = 0;
  media = 0;
  
  printf("Digite a %da. nota ou -1 para parar: ", alunos+1);
  scanf("%d", &nota);
  
  while(nota != -1)
  {
     total += nota;
     alunos++;
     
     if(nota >= 60) contApr++;
     else
     {
         if(nota >= 30) contExa++;
         else contRep++;
     }
     
     printf("Digite a %da. nota ou -1 para parar: ", alunos+1);
     scanf("%d", &nota);         
  }
  
  if(alunos > 0)
  {
    media = total / (float)alunos;
    printf("\nO total de alunos e %d.", alunos);
    printf("\nA media das notas e %f.", media);
    printf("\nO no. de alunos aprovados e %d.", contApr);
    printf("\nO no. de alunos de exame e %d.", contExa);
    printf("\nO no. de alunos reprovados e %d.", contRep);          
  }
  
  printf("\nFim de Programa.");
  
  system("PAUSE");	
  return 0;
}
