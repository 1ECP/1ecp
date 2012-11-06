#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char string[20];
  
  scanf("%s", &string);
  
  printf("\n %s \n", string);
  
  int i;
  for(i = 0; i <20; i++){
        printf("\n%c", string[i]);
        if(string[i] == '\0') break;
  }  
  
  system("PAUSE");	
  return 0;
}
