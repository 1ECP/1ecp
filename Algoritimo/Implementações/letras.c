#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char letra;
  int contA, contB, flag;
  
  contA = contB = flag = 0;
  //system("stty raw"); 
  
  while(flag == 0)
  {
    printf("\ndigite uma letra: ");
    scanf("%c", &letra);
   // getchar();
    
    switch(letra)
    {
        case 'a':
            contA++;
            break;
        
        case 'b':
            contB++;
            break;
        case 's':
             flag = 1;
             break;
    }
    
  }  
  
  printf("\n\nforam digitados %d a e %d b.", contA, contB);
  
  system("PAUSE");	
  return 0;
}
