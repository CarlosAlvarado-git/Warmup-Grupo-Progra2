
#include <stdio.h>
#include <stdlib.h>


struct estudiantes
{
  char nombre[30];
  int carnet; 
  int nota;
} estudiante[15];

void datos(struct estudiantes persona[]){
  for(int i=0; i<15;i++)
  {
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", persona[i].nombre);
    printf("Ingrese el carnet del estudiante: ");
    scanf("%d", &persona[i].carnet);
    printf("Ingrese la nota del estudiante: ");
    scanf("%d", &persona[i].nota);
    system("cls");
    printf("Estudiante registrado con exito!");
    printf("\n\n");
  }
}

void buscar(struct estudiantes persona[])
{
  printf("Ingrese el carnet del estudiante que desea buscar: ");
  int carnet = 0, existe = -1, cont = 0;
  scanf("%d", &carnet);

  do{
    existe = (persona[cont].carnet == carnet)? cont: -1;
    cont++;
  }while(existe == -1 & cont <15);
  printf("\n\n");

  if(existe != -1)
  {
    printf("Nombre del estudiante: ");
    printf("%s",persona[existe].nombre);
    printf("\nCarnet del estudiante: ");
    printf("%d",persona[existe].carnet);
    printf("\nNota del estudiante: ");
    printf("%d",persona[existe].nota);
  }
  else{
   printf("El estudiante no existe");
  }
}

int main(void) {
  datos(estudiante);
  buscar(estudiante);
  return 0;
}
