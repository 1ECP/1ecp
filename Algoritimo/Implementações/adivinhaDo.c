#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int secreto, chute;
  
  srand(time(NULL));
  secreto = rand()%100;
  
  chute = -1;
  
  do
  {
      printf("\nDigite seu chute: ");
      scanf("%d", &chute);
      
      if( chute > secreto)
          printf("\nErrado! Chute um numero menor!");
      
      if( chute < secreto)
          printf("\nErrado! Chute um numero maior!");
  }while(chute != secreto);
  
  printf("\nVocê acertou!");
    
  
  system("PAUSE");	
  return 0;
}
