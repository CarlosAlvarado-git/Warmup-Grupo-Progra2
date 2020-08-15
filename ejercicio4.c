#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estudiantes {
    char nombre[40];
    char carnet[10];
    char nota[3];
    struct estudiantes *siguiente;//punteros...
} estudiantes;
typedef estudiantes *punterop; //puntero principial, el que apunta al primero. 

void Insertar(punterop *cabeza, estudiantes* alumno){ //recibe el puntero de cabeza, y el que voy a crear..
    punterop nodo = malloc(sizeof(estudiantes));
    strncpy(nodo ->nombre, alumno->nombre, 40);
    strncpy(nodo ->carnet, alumno->carnet, 10);
    strncpy(nodo ->nota, alumno->nota, 3);
    nodo->siguiente = *cabeza; //en el primer caso, cabeza apunto a null, luego, el nuevo creado apunta a donde cabeza apuntaba y luego cabeza apunta a null.
    *cabeza = nodo;
    //en este caso si ya ha dos, el nuevo apunto al que antes cabeza apuntaba y ese se vuelve cabeza, entonces estamos agregando al principio no al final....
}

void ObtenerDatos(char carnetpedido[10], punterop cabeza){// para buscar el carnet se necesita el pedido y el el valor de cabeza, no la cabeza como tal...
    punterop puntero = cabeza; //obtendo el puntero al que cabeza apunta....
    int bandera = 0;
    while(puntero->siguiente && bandera != 1){ // recorro moviendome entre punteros y viendo que mi "bandera" no haya cambiado a 0.
        if(strcmp(puntero->carnet, carnetpedido)== 0){ //strcmp? esto lo que hace es que compara los strings, y si son iguales devuelve 0.
            bandera = 1;
        }
        else
        {
            puntero = puntero->siguiente;
        }
    }
    if(puntero->siguiente == NULL && bandera != 1){ // si llego al último caso y mi bandera no ha cambiado, vuelvo a comprar los strings...
        if(strcmp(puntero->carnet, carnetpedido)==0){
            bandera = 1;
        }
    }
    if(bandera == 1){ //mostrar los valroes....
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
void recorer(punterop cabeza){ // en esta funcion recorro y si muestra como es que se introduce al principio y no al final...
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
  cabeza = NULL;// vuelvo null para que al apuntar a cabeza sea un null...
  estudiantes alumno;
  int parar = 0;
  while (parar < 15) //se cuarda los datos de los 10 estudiantes y se realiza el proceso de insertar...
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
  printf("Ingrese el carnet del estudiante a buscar: \n"); //pregunto y muestro si existe o no el estudiante(carnet) ingresado.
  scanf("%s", carnet);
  ObtenerDatos(carnet, cabeza);
  return 0;
}
