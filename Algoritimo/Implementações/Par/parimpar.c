#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    
    printf("Digite o numero: ");
    scanf("%d", &numero);
    
    if(numero%2 == 0)
    {
        printf("O numero: %d e par!\n", numero);
    }
    else
    {
        printf("O numero: %d e impar!\n", numero);
    }
  
  system("PAUSE");	
  return 0;
}
