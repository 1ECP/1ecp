#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero, fases;
  int total;  
  float media;
  
  fases = 10;
  total = 0;
  media = 0;
  
  
  while(fases > 0)
  {
              printf("\nDigite a qtd de inimigos: ");
              scanf("%d", &numero);
              total = total + numero;
              fases--;
  }
  
  media = total/10.0;
  
  printf("A media e %f\n", media); 
  
  system("PAUSE");	
  return 0;
}
