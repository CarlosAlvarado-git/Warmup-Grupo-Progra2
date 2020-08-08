#include <stdio.h>

int main(void) {
  //declaración de variables
  int numero = 0;
  int opcion = 0;
  int acumulador = 0;
  //Menú
  printf("Seleccione una opcion \n 1. Calcular un solo número \n 2. Calcular en un rango de numeros \n");
  //Ingreso de opción para el Menú
  scanf("%d", &opcion);
  //Opción 1: Un solo número
  if (opcion == 1)
  {
    //Solicitud de número
    printf("Ingrese un numero \n");
    //Ingreso de número
    scanf("%d", &numero);
    //Recorrido desde 1 hasta 1 número antes del número ingresado
    for (int x = 1; x < numero; x++)
    {
      //Comparación para ver si x es divisor del número
      if (numero % x == 0)
      {
        //Acumulador de divisores
        acumulador += x;
      }
    }
    //Comparador entre el total sumado de los divisores y el número ingresado
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
    //Solicitud de número para límite de búsqueda de números perfectos
    printf("Ingrese un numero para el límite \n");
    //Ingreso de número para límite
    scanf("%d", &numero);
    //El número 1 no puede ser perfecto ni puede ser analizado, se coloca por procedimiento que no es perfecto
    printf("El número 1 no es perfecto \n");
    //Recorrido desde 2 hasta el número ingresado como límite
    for (int y = 2; y < numero+1; y++)
    {
      //Reinicio de la variable acumulador para cada iteración
      acumulador = 0;
      //Recorrido desde 1 hasta el límite y (Recorrido total)
    for (int x = 1; x < y; x++)
    {
      //Comparación y encontrar divisor
      if (y % x == 0)
      {
        //Sumatoria de divisores
        acumulador += x;
      }
    }
      //Comparación entre número de recorrido (variable:y) y el acumulado de la suma de los divisores del número.
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
