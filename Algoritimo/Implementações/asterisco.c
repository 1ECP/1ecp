#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  int i;
  
  printf("Digite o numero: ");
  scanf("%d", &numero);
  
  printf("\n\n");
  
  for(i = 0; i < numero; i++)
        printf("*");
        
  printf("\n\n");
  
  system("PAUSE");	
  return 0;
}
