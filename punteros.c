/*Punteros*/

#include <stdio.h>

main()
{
	int numero=15, *puntero;
	
	puntero=&numero;
	
	printf("Valor =%d\n", numero);
	printf("Direccion=%p", puntero);
	
	return 0;
}
