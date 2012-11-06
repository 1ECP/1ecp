#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nota;
    
    printf("Digite a nota: ");
    scanf("%d", &nota);
    
    if(nota>=60)
    {
         printf("O aluno passou!\n");
         printf("Parabens!\n");
    }
    else 
         printf("O aluno reprovou!\n");
         printf("Sempre aparece!\n");
    
  
  system("PAUSE");	
  return 0;
}
