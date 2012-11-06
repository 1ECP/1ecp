#include <stdio.h>
#include <stdlib.h>

int aleatorio(int, int);

int main(int argc, char *argv[])
{
  srand( time(NULL) );
  int dado1, dado2, soma, i;
  int contadores[13];
  
  for(i = 0; i<13;i++)
        contadores[i] = 0;
    
  for(i = 0;i<10000;i++)
  {
        dado1 = aleatorio(1,6);
        dado2 = aleatorio(1,6);
        soma =  dado1 + dado2;
        
        contadores[soma]++;
  }
  
  for(i = 2; i<13; i++)
  {
        printf("%d: \t%d vezes \t%.2f%% \n", i,contadores[i], (contadores[i]/10000.0)*100 ); 
  }
  system("PAUSE");	
  return 0;
}

int aleatorio(int min, int max)
{     
  int div = (max - min)+1;
  int num = (rand()%div)+min;
  
  return num;  
}
