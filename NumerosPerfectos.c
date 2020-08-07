#include <stdio.h>

int main(void) {
  int numero = 0;
  int opcion = 0;
  int acumulador = 0;
  printf("Seleccione una opcion \n 1. Calcular un solo número \n 2. Calcular en un rango de numeros \n");
  scanf("%d", &opcion);
  if (opcion == 1)
  {
    printf("Ingrese un numero \n");
    scanf("%d", &numero);
    for (int x = 1; x < numero; x++)
    {
      if (numero % x == 0)
      {
        acumulador += x;
      }
    }
    printf("%d, %d \n", acumulador, numero);
    if (numero == acumulador)
    {
      printf("El número %d es perfecto \n", numero);
    }
    else
    {
      printf("El número %d no es perfecto \n", numero);
    }
    
  }
  else if (opcion == 2)
  {
    printf("Ingrese un numero para el límite \n");
    scanf("%d", &numero);
    printf("El número 1 no es perfecto \n");
    for (int y = 2; y < numero+1; y++)
    {
      acumulador = 0;
    for (int x = 1; x < y; x++)
    {
      if (y % x == 0)
      {
        acumulador += x;
      }
    }
    if (y == acumulador)
    {
      printf("El número %d es perfecto \n", y);
    }
    else
    {
      printf("El número %d no es perfecto \n", y);
    }
    }
  }
  
  
  return 0;
}