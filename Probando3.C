#include <stdio.h>

typedef struct
{
  int edad;
  char nombre;
  float altura;
} Datos;

void formulario(Datos *p);
void mostrar(Datos *p);

int main()
{
  Datos persona, *ptr=&persona;

  formulario(ptr);
  mostrar(ptr);

  return 0;
}

void formulario(Datos *p)
{
  printf("Ingrese sus datos\n");
  printf("Edad: ");
  scanf("%d\n", &p->edad);
  printf("Nombre: ");
  scanf("%s\n", &p->nombre);
  printf("Altura (en m): ");
  scanf("%f\n", &p->altura);

  printf("Formulario completado\n");
}

void mostrar(Datos *p)
{
  printf("Edad: %s\n", p->edad);
  printf("Nombre: %s\n", p->nombre);
  printf("Altura: %.2f metros \n", p->altura);
}
