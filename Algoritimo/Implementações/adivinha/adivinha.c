#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int secreto, tentativa, contador;
    
  srand( time(NULL) );
  secreto = rand()%100;
  
  tentativa = -1;
  contador = 0;
  
  while(tentativa != secreto)
  {
      printf("\nDigite a sua tentativa: ");
      scanf("%d", &tentativa);
      
      contador++;
      
      if(tentativa > secreto)
      {
          printf("\nErrado! Tente chutar um menor");             
      }
      
      if(tentativa < secreto)
      {
         printf("\nErrado! Tente chutar um maior");          
      }          
  }
  
  printf("\nParabens! Você acertou o numero %d em %d vezes\n", secreto, contador);
    
  system("PAUSE");	
  return 0;
}
