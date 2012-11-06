#include <stdio.h>
#include <stdlib.h>

int aleatorio(int, int);


int main(int argc, char *argv[])
{
  int a[10];
  srand(time(NULL));
  
  printf("%d\n", aleatorio(1,6));
  
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

