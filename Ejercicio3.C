//Estructuras de Datos: Guia 1 (Pilas)->Ejercicio #3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 10

typedef struct
{
  int top;
  int dat[TAM];
}Stack;

void transfer(Stack *p, int ar[]);


int main()
{
  int numeros[10]={10,11,12,13,14,15,16,17,18,19};
  Stack pila, *pilptr=&pila;
  pilptr->top=-1;

  transfer(pilptr, numeros);

  return 0;
}

void transfer(Stack *p, int ar[])
{
  int i;
  for(i=TAM-1; i>=0; i++)
  {
    p->dat[++p->top]=ar[i];
  }
}
