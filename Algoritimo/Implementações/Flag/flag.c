#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero, total, fases;
    float media;
    
    total = fases = 0;
    media = 0;
    
    printf("Digite o no. de inimigos ou -1 para parar: ");
    scanf("%d", &numero);
    
    while(numero != -1)
    {
                 total = total+numero;
                 fases++;
                 
                 printf("\nDigite o no. de inimigos ou -1 para parar: ");
                 scanf("%d", &numero);
    }
    
    if (fases > 0)
    {
       media = total/fases;    
       printf("\nA media de inimigos nas %d fases e %f.", fases, media);
    }
    
    printf("\nFim de programa\n");
    
  
  system("PAUSE");	
  return 0;
}
