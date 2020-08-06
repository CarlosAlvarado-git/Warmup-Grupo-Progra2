#include <stdio.h>
int Ingreso(int numero)
{
  printf("Ingrese un numero \n");
  scanf("%d", &numero);
  printf("%d \n", numero);
  return 0;
}
void CalcularPerfecto(int numero)
{
  printf("%d \n", numero);
  int acumulador = 0;
   for (int x = 1; x < numero; x++)
  {
    if (numero % x == 0)
    {
      acumulador += x;
    }
  }
   if (numero == acumulador)
   {
     printf("El número %d es perfecto \n", acumulador);
   }
   else
   {
     printf("El número %d no es perfecto \n", acumulador);
   }
   acumulador = 0;
}
int main(void) {
  int numero = 0;
  int opcion = 0;
  printf("Seleccione una opcion \n 1. Calcular un solo número \n 2. Calcular en un rango de numeros \n");
  scanf("%d", &opcion);
  if (opcion == 1)
  {
    numero = Ingreso(numero);
    CalcularPerfecto(numero);
  }
  else if (opcion == 2)
  {
    numero = Ingreso(numero);
    for (int y = 0; y <= numero; y++)
    {
      CalcularPerfecto(numero);
    }
  }
  
  
  return 0;
}