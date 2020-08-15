#include <stdio.h>
#include <stdlib.h>

//Asigna la dirección de memoria que guarda un punto char a otro puntero char
void assign(char *origin, char *destiny)
{ 
  destiny = origin;

  printf("\nPalabra original: %s", origin); 
  printf("\nPalabra asignada: %s\n\n", destiny); 
}


//Copia la cadena de memoria referenciadad por el puntero char origin en otro espacio de memoria totalmente diferente. Esto se hace recoriendo todo el string.  
void clone(char *origin, char *destiny)
{
  while(*origin != '\0')
  {
    *destiny =  *origin; 

    origin++;  
    destiny++; 
  }
*destiny = '\0';
}


//Se unen dos cadenas de memoria en una nueva.  
void concat (char *cadena1, char *cadena2, char *cadena3)
{
  while (*cadena1 != '\0')
  {
    *cadena3 = *cadena1;
    cadena1++; 
    cadena3++; 
  }

  *cadena3 = 32;
  cadena3++;

  while (*cadena2 != '\0')
  {
    *cadena3 = *cadena2; 
    cadena2++; 
    cadena3++; 
  }

  *cadena3 = '\0'; 
}


//Crea un espacio de memoria en la memoria dinámica para el puntero char donde se guarda un palabra que después se eliminará. 
void dispose()
{
  char *p = malloc(sizeof(char[256])); 
  
  printf("Inserte una palabra: \n"); 
  scanf("%s", p);  

  printf("Palabra antes de eliminar: %s", p);

  free(p); 

  printf("%s", p);

  p = NULL; 
  printf("\nPalabra eliminada: %s", p);
}



int main(void) {
  
  char origin[256]; 
  char destiny[256]; 
  char resultado[256]; 

  int option = 0; 

  while(1)
  {
    printf("\n\nMENU\n");
    printf("1. Assign \n2. Clone \n3. Concat \n4. Dispose\n5. Salir\n"); 

    printf("Ingresa el número de tu opción: \n"); 
    scanf("%d", &option); 

    switch (option)
    {
      case 1: 
      
        printf("\n\nASSING\nInserte una palabra: "); 
        scanf("%s", origin);

        assign(origin, destiny); 

        break;

      case 2: 
        printf("\n\nCLONE\nInserte una palabra: "); 
        scanf("%s", origin);  

        clone(origin, destiny); 
        printf("El clone es: %s", destiny); 

        break;
      
      case 3: 
        printf("\n\nCONCAT\n"); 
        printf("Inserte la primer palabra:"); 
        scanf("%s", origin); 

        printf("\nInserte la segunda palabra:"); 
        scanf("%s", destiny); 

        concat(origin, destiny, resultado);
        printf("\nEl resultado es: %s", resultado);

        break;

      case 4: 
        printf("\n\nDISPOSE\n");
        dispose(); 

        break;
      
      case 5: 
        printf("\n\nGRACIAS POR USAR EL PROGRAMA :)"); 
        return 0;

        break;
      default:
        printf("La opción %d no existe", option); 
    }

  }
  
  return 0;
}