#include <stdio.h>
#include <stdlib.h>

void imprime(int, char);


int main(int argc, char *argv[])
{
    int base, i, j, n, espacos;
    char car;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o simbolo: ");
    scanf(" %c", &car);
    
    espacos = base/2;
    
    for(n = 1; n <= base; n = n+2)
    {
        imprime(espacos, ' ');              
        imprime(n, car);
        
        printf("\n");
        espacos--;
    }
    espacos =1;
    
    for(n = base-2; n >= 1; n = n-2)
    {
        imprime(espacos, ' ');
        imprime(n, car);
        
        printf("\n");
        espacos++;
    }
  
  system("PAUSE");	
  return 0;
}

void imprime(int x, char c)
{
     int i;
     for( i = 0; i< x; i++)
             printf("%c",c);
}

