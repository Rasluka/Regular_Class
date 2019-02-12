/*Numeros primos*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,num, div=0;
	
	system("cls");
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		  div+=1;
	}
	
	if(div==2)
	  printf("%d es un numero primo", num);
	else
	  printf("%d no es un numero primo", num);  
	
	getch();
	return 0;
}
