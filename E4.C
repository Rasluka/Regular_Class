//Guia 8 (Estructuras) Ejercicio #4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
  char carnet[20];
  char nombre[20];
  int edad, notas[4];
} Datos;

int menu_principal();
//void ingresar_datos(Datos );


int main()
{
  int op;
  Datos alumnos[20];

  do
  {
    op=menu_principal();

  }
  while(op!=5);

  return 0;
}

int menu_principal()
{
  int opc;

  system("clear");
  printf("**************************************\n");
	printf("************     MENU    *************\n");
	printf("**************************************\n");
  printf("1 - Ingresar datos de un alumno\n");
	printf("2 - Promedio\n");
	printf("3 - Ver lista de alumnos\n");
	printf("4 - Ver estado de la pila\n");
	printf("5 - Salir\n");
	scanf("%d", &opc);

  return opc;
}
