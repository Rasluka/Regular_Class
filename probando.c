#include <stdio.h>
#define TAM 4

typedef struct
{
  int num[TAM];
} Datos;

void llenar(Datos *p)
{
  int i;

  for(i=0; i<TAM; i++)
  {
    printf("Ingrese el dato %d\n", i+1);
    scanf("%d", &p->num[i]);
  }
}

void mostrar(Datos *p)
{
  int i;
  for(i=0; i<TAM; i++)
  {
    printf("Dato %d: %d\n", i+1,p->num[i]);
  }
}

int main()
{
  Datos arreglo;
  Datos *datptr=&arreglo;

  int i;

  llenar(datptr);
  mostrar(datptr);

  datptr->num[0]=55;

  printf("num[1]= %d\n",datptr->num[0] );

  return 0;
}
