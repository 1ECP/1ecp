#include <stdio.h>
#include <stdlib.h>

main()
{
  int raio;
  float area;
  float PI = 3.14;
  
  printf("Digite o valor de raio: ");
  scanf("%d", &raio);
  
  area = PI * (raio * raio);
  
  printf("\nO valor da area e: %f\n", area);
  
  system("PAUSE");	
  
}
