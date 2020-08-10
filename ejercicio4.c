#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estudiantes {
    char nombre[40];
    char carnet[10];
    char nota[3];
    struct estudiantes *siguiente;
} estudiantes;
typedef estudiantes *punterop;

void Insertar(punterop *cabeza, estudiantes* alumno){
    punterop nodo = malloc(sizeof(estudiantes));
    strncpy(nodo ->nombre, alumno->nombre, 40);
    strncpy(nodo ->carnet, alumno->carnet, 10);
    strncpy(nodo ->nota, alumno->nota, 3);
    nodo->siguiente = *cabeza;
    *cabeza = nodo;

}

void ObtenerDatos(char carnetpedido[10], punterop cabeza){
    punterop puntero = cabeza;
    int bandera = 0;
    while(puntero->siguiente && bandera != 1){
        if(strcmp(puntero->carnet, carnetpedido)== 0){
            bandera = 1;
        }
        else
        {
            puntero = puntero->siguiente;
        }
    }
    if(puntero->siguiente == NULL && bandera != 1){
        if(strcmp(puntero->carnet, carnetpedido)==0){
            bandera = 1;
        }
    }
    if(bandera == 1){
        printf("El nombre es: %s", puntero->nombre);
        printf("\n");
        printf("El carnet es: %s", puntero->carnet);
        printf("\n");
        printf("La nota es: %s", puntero->nota);
    }
    else{
        printf("No existe este estudiante");
    }
}
void recorer(punterop cabeza){
    punterop puntero = cabeza;
    while(puntero->siguiente){
        printf("%s\n", puntero->nombre);
        puntero = puntero->siguiente;
    }
    printf("%s\n", puntero->nombre);
}

int main(void) {
  printf("Bienvenido, ingrese sus 15 estudiantes\n");
  punterop cabeza;
  cabeza = NULL;
  estudiantes alumno;
  int parar = 0;
  while (parar < 15)
  {
    printf("Ingrese el nombre del estudiante %d:\n", parar+1);
    scanf("%s", alumno.nombre);
    printf("Ingrese el carnet del estudiante %d:\n", parar+1);
    scanf("%s", alumno.carnet);
    printf("Ingrese el nota del estudiante %d:\n", parar+1);
    scanf("%s", alumno.nota);
    Insertar(&cabeza, &alumno);
    parar++;
  }
  char carnet[10];
  printf("Ingrese el carnet del estudiante a buscar: \n");
  scanf("%s", carnet);
  ObtenerDatos(carnet, cabeza);
  return 0;
}
