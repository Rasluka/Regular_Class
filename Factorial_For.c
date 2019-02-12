//Factorial con Ciclo For...
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	int i, num;
	long fac=1;

	printf("Ingrese un numero\n");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		fac=fac*i;
	}

	printf("El factorial es: %ld\n", fac);

	system("pause");
	return 0;
}
