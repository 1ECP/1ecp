#include <stdio.h>
#include <stdlib.h>

#define VAL 10

void linha(int);

int main(int argc, char *argv[])
{
  const int TAM = 10;
    
  int i, soma;
  int valores[TAM];
  
  soma = 0;
  
  for(i = 0; i <TAM; i++)
  {
        printf("\nDigite um valor: ");
        scanf("%d", &valores[i]);       
  }
  
  for(i = 0; i<TAM; i++)
  {
        soma += valores[i];
  }
  
  printf("\nA media e %.2f \n", soma/(TAM*1.0));  
  
  for(i = 0; i <TAM; i++)
  {
        printf("\n%d\t", valores[i]);
        linha(valores[i]);
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

void linha(int x)
{
     int i;
     for(i = 0; i< x; i++)
           printf("*");     
}
