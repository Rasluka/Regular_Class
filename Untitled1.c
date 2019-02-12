/*Lista doblemente enlazadas*/

#include <stdio.h>
#include <stdlib.h>

typedef struct struct_Lista{
	int datos;
	struct struct_Lista *sigPtr;
	struct struct_Lista *prePtr;
}listNodo;

typedef listNodo *lNodo;
typedef listNodo *listaPtr;

/*PROTOTIPO DE FUNCIONES*/
int menu();

int main(){
	int opc;
	
	
	do{
		opc=menu();
	}
	while(opc!=3);
	
	system("pause");
	return 0;
}

/*DEFINICION DE LAS FUNCIONES*/

int menu(){
	int op;
	
	do{
		puts("---------------------------------------------");
		puts("------  LISTAS DOBLEMENTE ENLAZADAS   -------");
		puts("---------------------------------------------");
		puts("-----      1 - Ingresar Elemento        -----");
		puts("-----      2 - Eliminar Elemento        -----");
		puts("-----      3 - Cerrar APP               -----");
		printf("->Su opcion: ");
		scanf("%d", &op);		
		
		if(op<1 || op>3){
			printf("-> Opcion Invalida..."); 
			getch();
		}
		else
			return op;
	}
	while(op>3 || op<1);
}
