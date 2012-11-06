#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero1, numero2, numero3, numero4;
    int maior, menor;
    
    printf("Digite o 1o. numero: ");
    scanf("%d", &numero1);
    
    maior = numero1;
    menor = numero1;
    
    printf("Digite o 2o. numero: ");
    scanf("%d", &numero2);
    
    if(numero2 > maior)
    {
       maior = numero2;
    }
    
    if(numero2 < menor)
    {
       menor = numero2;
    }
    
    printf("Digite o 3o. numero: ");
    scanf("%d", &numero3);
    
    if(numero3 > maior)
    {
       maior = numero3;
    }
    else
    {
        if(numero3 < menor)
        {
                   menor = numero3;
        }
    }
    
    printf("Digite o 4o. numero: ");
    scanf("%d", &numero4);
    
    if(numero4 > maior)
    {
         maior = numero4;
    }
    
    if(numero4 < menor)
    {
        menor = numero4;
    }
    
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
  
  system("PAUSE");	
  return 0;
}
