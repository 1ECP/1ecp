#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  long long int fatorial, i;
  
  fatorial = 1;
  
  printf("Digite o numero: ");
  scanf("%d", &numero);
  
  for(i = 1; i <= numero; i++)
        fatorial *= i;
        
  printf("\n\nO fatorial de %d e %i.\n", numero, fatorial);  
  
  system("PAUSE");	
  return 0;
}
