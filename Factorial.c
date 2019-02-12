/*Factorial de un Numero*/

#include <stdio.h>

typedef int Array[10];

main()
{
	int num,i;
	long factorial=1;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	
	if(num==0)
	   printf("El factorial es: 0\n");
	else
	{
		for(i=2; i<=num; i++)
		{
			factorial=factorial*i;
			printf("Fa: %d\n", factorial);
		}
		
		printf("Factorial: %ld", factorial);
	}
	
	
	system("pause");
	return 0;
}
