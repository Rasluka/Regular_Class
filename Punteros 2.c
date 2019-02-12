#include <stdio.h>

int main()
     {
     int numero, numero2;
     int *pu1, *pu2;

     numero = 43;
     pu1=&numero;
     pu2=&numero2;
     
     printf("valor de numero = %i\n", numero );
     printf("Direccion de numero = %p\n", pu1 );
     printf("valor de numero = %i\n", numero2 );
     printf("Direccion de numero = %p\n", pu2 );
     }
