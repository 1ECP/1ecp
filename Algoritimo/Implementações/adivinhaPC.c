#include <stdio.h>
#include <stdlib.h>

int aleatorio(int, int);

int main(int argc, char *argv[])
{
  int secreto, tentativa, min, max;
  char c;
  
  min = 1;
  max = 10000;
  
  tentativa = -1;
  
  printf("Digite o numero secreto: ");
  scanf("%d", &secreto);
  
  while(tentativa != secreto)
  {
    //tentativa = aleatorio(min,max);
    tentativa = (max + min)/2;
    
    printf("\nO numero e: %d", tentativa);
    
    if(tentativa != secreto)
    {
        printf("\no numero secreto e: ");
        scanf(" %c",&c);
        
        if(c == '>')
             min = tentativa +1;
        
        if(c == '<')
             max = tentativa -1;
    }
                  
  }
  
  printf("\n\nParabéns você acertou!\n"); 
  
  system("PAUSE");	
  return 0;
}

int aleatorio(int min, int max)
{ 
  srand( time(NULL) );
    
  int div = (max - min)+1;
  int num = (rand()%div)+min;
  
  return num;  
}
