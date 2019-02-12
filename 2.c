#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu();
void binario_a_dec();
void dec_a_binario();

int main(){

	int opc;
	
	do{
		opc=menu();
		
		switch(opc){
			case 1:{binario_a_dec();break;}
			case 2:{dec_a_binario();break;}
   		}	
	}
	while(opc!=3);	
	
	return 0;
}//FINDEL MAIN


int menu(){
	
	int op;
	system("cls");
		printf("MENU\n");
		printf("1 - Convertir de binario a decimal\n");
		printf("2 - Convertir de decimal a binario\n");
		printf("3 - Salir\n");
		scanf("%d", &op);
		
		return op;	
}

void binario_a_dec(){
		char dato[20];
		int opc, i=0, tam=0, decimal=0, pot, cater;
int *arreglo;	
	
	system("cls");
			printf("Convertir de binario a decimal\n");
			printf("Ingrese el dato en binario: ");
			scanf("%s", &dato);
			
			printf("Usted ingreso: %s\n", dato);

			
			while(dato[i]!='\0')
			{
				tam++;
				i++;
			}
			
			printf("Tamaño del arreglo: %d\n", tam);
			
			
			arreglo=(int *) malloc(sizeof(int)*tam);
			
			for(i=0; i<tam; i++){
				if(dato[i]=='1'){
					arreglo[i]=1;
			}
			else if(dato[i]=='0'){
					arreglo[i]=0;
			}
				
				
			}
			
			for(i=0; i<tam;i++){
				printf("%d", arreglo[i]);
			}	
			
			puts("");
			
			pot=tam-1;

			
			for(i=0; i<tam; i++){
				cater=arreglo[i]*(pow(2,pot));
				printf("%d * %d elevado ala %d= %d...\n",arreglo[i], 2, pot, cater);
				decimal=decimal+(arreglo[i]*(pow(2,pot)));
				pot--;
			}
			
			printf("Esto en decimal es: %d", decimal);
				
			getch();
	
}

void dec_a_binario(){
	typedef char bin;
	int decimal,j,i=0, cont=1, ndec, co=0;
	char *binario;
	
	
	printf("Ingrese el dato en decimal: ");
	scanf("%d", &decimal);
	
	ndec=decimal;
	
	while(decimal/2>1){
		if(decimal%2==1){
			decimal=(decimal-1)/2;
		}
		else if(decimal%2==0){
			decimal=decimal/2;
		}
		co++;
	};
	
	co=co+1;
	printf("Se realizaron %d divisiones...\n", co);
	
	co++;
	
	binario=(char*) malloc(sizeof(char)*co);
	
	decimal=ndec;
	
	printf("%d\n", decimal);
	printf("tamanio del arreglo %d\n", co);
	printf("Valor de i %d\n", i);
	
	while(decimal/2>=1){
		if(decimal%2==1){
			decimal=(decimal-1)/2;
			binario[i]='1';				
		}
		else if(decimal%2==0){
			decimal=decimal/2;
			binario[i]='0';
		}
		i++;
	};

	if(decimal/2<1){
		if(decimal%2==1){
			binario[i]='1';
		}
		else if(decimal%2==0){
			binario[i]='0';
		}
	}
	
	for(j=co-1; j>=0; j--)
	{
		printf("%c", binario[j]);
	}	
	getch();
	
}
