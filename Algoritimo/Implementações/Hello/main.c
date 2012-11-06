/*Este programa e um Hello World
versão: 1.0
Autor: Daniel Calife*/

#include <stdio.h>
#include <stdlib.h>

main()
{
  int numero1;
  int numero2, soma;  
  
  printf("Digite um numero: ");
  scanf("%d", &numero1 );
  
  printf("Digite um outro numero: ");
  scanf("%d", &numero2 );
         
  soma = numero1 + numero2;      
  
  printf("\nHello\n");
  
  printf("A soma dos numeros: %d e %d\n", numero1, numero2);
  printf("e: %d\n",soma);
  
  system("PAUSE");	// este comando espera ate um tecla ser pressionada   
  
}
