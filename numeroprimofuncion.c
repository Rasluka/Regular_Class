/*Numeros primos*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void numero_primo(int x)
{
    int i, div=0;

	for(i=1; i<=x; i++)
	{
		if(x%i==0)
		{
		  div+=1;
		}; 		  
	};
	
	if(div==2)
	  printf("%d es un numero primo\n", x);
	else
	  printf("%d no es un numero primo\n", x);  	
}


int main()
{
	int num;
	
	system("cls");
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	numero_primo(num);
	
	getch();
	return 0;
}
