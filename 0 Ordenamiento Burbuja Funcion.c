#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void ordenar(int *a);


int main()
{
	int i, array[5]={10,25,12,18,54};
	
	ordenar(array);
	
	for(i=0;i<5;i++)
    printf("%3d",array[i]);
    
	return 0;
}

void ordenar(int *a)
{
	int temp, i, j;
	
	for (i=1;i<5;i++)
    {
    	for (j=0;j<5-1;j++)
	    {
	    	if (a[j] > a[j+1])	 //condicion
		    {
		    	temp = a[j];	 //temp guarda momentaneamente el valor de lista[j]
			    a[j]=a[j+1];  //Asigno al la posicion lista[j], lo que hay en lista[j+1]
			    a[j+1]=temp;	//obtendra un nuevo valor por parte de temp.
		    }
	    }
	}
}
