#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2;
    
    printf("Digite o 1o. numero: ");
    scanf("%d", &num1);
    
    printf("Digite o 2o. numero: ");
    scanf("%d", &num2);
    
    if(num1 > num2)
    {
         printf("o numero %d - %d = %d\n", num1, num2, (num1-num2));        
    }
    else
    {
        printf("o numero %d - %d = %d\n", num2, num1, (num2-num1));
    }
  
  system("PAUSE");	
  return 0;
}
