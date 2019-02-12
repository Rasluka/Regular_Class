#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//APENAS TRABAJANDO EL LA funcion 1 y 2

typedef int *Arreglo;

/*PROTOTIPO DE FUNCIONES*/
int menu(int op);
int menu_insertar(); 

int pedir_elemento(int el);
int asignar_tam(int ta);
Arreglo crear_arreglo(Arreglo arr, int ta);
void insertar_elem(Arreglo arr, int ta);


//INICIO DE LA FUNCION MAIN
int main(){ 
	Arreglo arreglo;
	int tam, elem, opc;
	
	do{
		opc=menu(opc);
		
		switch(opc){
			case 1:{tam=asignar_tam(tam); arreglo=crear_arreglo(arreglo, tam);break;}
	
		}		
	}
	while(opc!=6);
		
	
	system("pause");
	return 0;
} //Fin del main

/*****************************************************************************/
/*****************        DEFINICION DE LAS FUNCIONES        *****************/
/*****************************************************************************/

//FUNCION MENU
int menu(int op){
	
	do{
		system("cls");
		puts("**********************************************************");
		puts("**********   PRACTICANDO ARREGLOS DINAMICOS     **********");
		puts("**********************************************************");
		puts("**** 1 - Crear arreglo                                ****");
		puts("**** 2 - Añadir elementos al arreglo                  ****");
		puts("**** 3 - Eliminar elemendo del arreglo                ****");
		puts("**** 3 - Eliminar todos los elemendos del arreglo     ****");
		puts("**** 4 - Buscar el elemento mayor                     ****");
		puts("**** 5 - Ordenar el arreglo ascendentemente           ****");
		puts("**** 6 - Salir                                        ****");
		puts("**********************************************************");
		printf("-------> Su opcion: ");
		scanf("%d", &op);
		
		if(op>6 || op<1){
			printf("La opcion -%d- es invalida...", op); getch();
		}	
	}
	while(op>6 || op<1);
	
	return op;
} //FIN FUNCION MENU

int menu_insertar(){
	int op1;
	
	do{
		system("cls");
		puts("**********************************************************");
		puts("**********        INGRESANDO ELEMENTOS          **********");
		puts("**********************************************************");
		puts("**** 1 - Generar arreglo automaticamente              ****");
		puts("**** 2 - Rellenar arreglo manualmente                 ****");
		puts("**** 3 - Salir                                        ****");
		puts("**********************************************************");
		printf("-------> Su opcion: ");
		scanf("%d", &op1);
		
		if(op1>3 || op1<1){
			printf("La opcion -%d- es invalida...", op1); getch();
		}	
	}
	while(op1>3 || op1<1);
}

int asignar_tam(int ta){
	puts("----------------------------------------------------------");
	puts("             ASIGNADOLE EL TAMAÑO AL ARREGLO");
	puts("----------------------------------------------------------");	
	ta=pedir_elemento(ta);
	
	return ta;
}

//Funcion crear arreglo
Arreglo crear_arreglo(Arreglo arr, int ta){
	
	if(arr!=NULL){
		
		arr=(int*) malloc(sizeof(int)*ta);
		
		if(arr){
			printf("Se ha asignado %d espacios al arreglo...", ta); 
			getch();
			return arr;		
		}
		else{
			printf("No se pudo completar la accion..."); getch();
		}		
	}
}

void insertar_elem(Arreglo arr, int ta){
	
	switch(menu_insertar()){
		case 1: {
			break;
		}
	}
	
}



//FUNCION QUE PIDE UN ELEMENTO
int pedir_elemento(int el){
	printf("Ingrese el dato: ");
	scanf("%d", &el);	
	
	return el;
}//FUNCION FUNCION PEDIR ELEMENTO
