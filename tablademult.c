/*Tabla de Multiplicar*/

#include <stdio.h>

tabla(int x)
{
	int j;
	
	for(j=1; j<=12; j++)
	{
		printf("%d x %d = %d\n", x, j, x*j);		
	}
	
};

main()
{
	int num;
	
	printf("TABLA DE MULTIPLICAR\n");
	printf("Ingrese un Numero: ");
	scanf("%d", &num);
	
	system("cls");
	
	tabla(num);

	
	system("pause");
    return 0;	
}
