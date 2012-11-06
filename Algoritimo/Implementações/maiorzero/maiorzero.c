#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero1, numero2, numero3;
    int maior;
    int result;
    
    printf("Digite o 1o. numero: ");
    scanf("%d", &numero1);
    
    printf("Digite o 2o. numero: ");
    scanf("%d", &numero2);
    
    printf("Digite o 3o. numero: ");
    scanf("%d", &numero3);
    
    maior = numero1;
    
    result = maior - numero2;
    
    if(result < 0)
    {
       maior = numero2;          
    }
    
    result = maior - numero3;
    
    if(result < 0)
    {
       maior = numero3;          
    }
    
    printf("\nO maior numero e %d\n",maior);
    
  system("PAUSE");	
  return 0;
}
