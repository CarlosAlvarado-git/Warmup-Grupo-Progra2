#include <stdio.h>

struct puntos
{
  int x; 
  int y; 
  int z;
}; 

int main(void) 
{
  printf("Almcacen de puntos 3D\n");
  int i; 
  struct puntos punto[20]; 

  for(i = 0; i < 20; i++)
  {
    printf("\n\nInserte el punto No. %d:\n", i+1); 
    scanf("%d", &punto[i].x); 
    scanf("%d", &punto[i].y);
    scanf("%d", &punto[i].z);

    printf("[%d, %d, %d]", punto[i].x, punto[i].y, punto[i].z); 
  }

  printf("\n\nPUNTOS ALMACENADOS:\n");

  for(i = 0; i < 20; i++)
  {  
    printf("[%d, %d, %d]\n", punto[i].x, punto[i].y, punto[i].z); 
  }

  return 0;
}
