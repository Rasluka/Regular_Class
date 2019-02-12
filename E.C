/*PROGRAMACION I*/
/*EXAMEN FINAL*/
/*ELABORADO POR JORGE OBANDO*/

#include<stdio.h>
#include<stdlib.h>

struct alquileres  /*Esta estructura guarda los datos de los clientes*/
{  char name[25];
	 char dni[25];
	 int codpro;
	 int socio;
} cliente[99];

void menup(); /*Funcion (void) que Envia a pantalla el menu principal*/
void menuestadisticas();  /*Envia a pantalla el menu de estadistica de la tienda*/
void tabla();/*Envia a pantalla la tabla de producto, precios y dias*/
void mensaje(); /*Envia un mensaje cuando no haya estadisticas que mostrar*/
void tipoproducto();

main()
{ int client=-1; /*Variable que determinara en que espacio de la structura se guarda dicha informacion del cliente*/
	int codpro, socio;
	int i, j, opc;
	int precios[4][2]={12000, 16000, 4500, 9000, 3700,7400,3000,6000}; /*Arreglo Bi que contiene los precios de cada producto*/
	int dias[4][2]={7,4,3,1,4,2,5,3}; /*Arreglo Bi que contiene los dias que un producto sera alquilado*/
	int existencia[4]={15,15,15,15}; /*Este arreglo declara el inventario existente para cada producto*/
	int adquiridos[4]={0};
	int ingresos=0, pase; /*Acomulador de todos los ingresos que la tienda vaya obteniendo*/
	int alquiler[4]={0}; /*Arreglo que acomulara los alquileres por producto para determinar el mas alquilado*/
	int masalq, menosalq, masadq;
	float temp; /*Variabla temporal que guardara un valor cualquiera dependiendo su uso*/
	float iva=0, neto=0;
	int c1, cerrar;

	system("cls");

	do
	{ fflush(stdin);
		do
		{
		 system("cls");
		 menup();
		 scanf("%d", &opc);

		 if(opc<1 || opc>5)
		 {
			 system("cls");
			 printf("Usted ingreso: Opcion %d...Opcion Invalida\n", opc);
		 }
		}
		while(opc<1 || opc>5);/*Este ciclo impide que se ingrese una opcion invalida*/

		if(opc==5)
			 c1=1;
		else
			 c1=0;

		if (opc>=1 && opc<=4)
		{
			switch(opc)
			/*Inicio del switch del menu principal*/
			{ case 1:{ /*Menu Principal->Nuevo Alquiler*/
									 system("cls");
									 client=client+1;
									 printf("*****************************\n");
									 printf("******* NUEVO ALQUILER ******\n");
									 printf("*****************************\n");
									 printf("        CLIENTE #%d\n", client+1);
									 printf("_____________________________\n");
									 printf("     INGRESE LOS DATOS\n");
									 printf("_____________________________\n");


									 fflush(stdin);/*Para liberar la entrada por teclado*/
									 printf("Nombre: ");
									 scanf("%[^\n]", &cliente[client].name);
									 printf("Cedula: ");
									 scanf("%s", &cliente[client].dni);
									 printf("Cod Pelicula:\n");
									 printf("1 - Tv Shows\n");
									 printf("2 - Accion/Thriller\n");
									 printf("3 - Comedy/Romance\n");
									 printf("4 - Musical\n");
									 do
									 {
										scanf("%d", &cliente[client].codpro);
										if(cliente[client].codpro<1 || cliente[client].codpro>4)
											printf("Opcion Invalida...\n");
									 }
									 while(cliente[client].codpro<1 || cliente[client].codpro>4);

									 do
									 {
										 printf("�Es un cliente socio?\n");
										 printf("1 - Si\n");
										 printf("2 - No\n");
										 scanf("%d", &j);

										 if(j!=1 && j!=2)
												printf("Opcion Invalida...\n");
									 }
									 while(j<1 || j>2);

									 if(j==1)
											j=0;
									 else if(j==2)
											j=1;

									 cliente[i].socio=j;
									 i=cliente[client].codpro-1;
									 cliente[client].codpro=i;
									 existencia[i]=existencia[i]-1;
									 alquiler[i]=alquiler[i]+1;

									 printf("Datos rellenados correctamente....");
									 getch();
									 system("cls");

									 printf("_______________________________\n");
									 printf("        ALQUILER #%d\n", client+1);
									 printf("_______________________________\n");
									 printf("Nombre: %s\n", cliente[client].name);
									 printf("Cedula: %s\n", cliente[client].dni);
									 if(j==0)
											printf("Cliete Socio: SI\n");
									 else if (j==1)
												 printf("Cliente Socio: NO\n");

									 printf("Producto: ");
									 if (i==0)
											printf("TV Show\n");
									 else if(i==1)
													printf("Accion/Thriller\n");
												else if(i==2)
														 printf("Romance/Comedy\n");
														 else if(i==3)
																	printf("Musical\n");

									 printf("Total: $%d\n", precios[i][j]);
									 printf("La tiene que regresar en %d dias", dias[i][j]);
									 getch();
									 system("cls");

									 ingresos=ingresos+precios[i][j];
									 iva=ingresos*0.16;
									 neto=ingresos-iva;
									 break;
							 }/*Fin de ingresar nuevo alquiler*/
				case 2:{ /*Menu Principal->Inventario*/
								 system("cls");
								 printf("**************************************************\n");
								 printf("******************  INVENTARIO  ******************\n");
								 printf("**************************************************\n");
								 printf("��������������������������������������������������\n");
								 printf(" ID �        PRODUCTO         �       CANTIDAD    \n");
								 printf("____�_________________________�___________________\n");
								 printf(" 1  � TV Show:                �  %d articulos\n", existencia[0]);
								 printf(" 2  � Accion/Thriller Movies: �  %d articulos\n", existencia[1]);
								 printf(" 3  � Romance/Comedy Movies:  �  %d articulos\n", existencia[2]);
								 printf(" 4  � Musical Movies:         �  %d articulos\n", existencia[3]);
								 printf("__________________________________________________\n");

								 printf("\n");
								 printf("�Desea agregar nuevas adquisiciones al inventario?\n");
								 printf("1 - SI\n");
								 printf("2 - NO\n");
								 do
								 {
									 scanf("%f", &temp);
									 if(temp!=1 && temp!=2)
											printf("Opcion Invalida\n");
								 }
								 while(temp!=1 && temp!=2);

								 if(temp==1)
								 {  printf("Ingrese el ID de Producto: ");
										do
										{
											scanf("%d", &i);
											if(i<1 || i>4)
												printf("Codigo de producto invalido...\n");
										}
										while(i<1 || i>4);
										printf("Ingrese la cantidad a agregar: ");
										scanf("%d", &j);

										i=i-1;
										adquiridos[i]=adquiridos[i]+j;
										existencia[i]=existencia[i]+j;
										printf("Se ha agregado correctamente...\n");
										getch();
								 }
								 break;
							 }/*Fin del inventario*/
				case 3:{ /*Menu Principal->Estadisticas*/
								 do/*Este ciclo permite regresar al menu anterior*/
								 {
									 system("cls");
									 menuestadisticas();/*La funcion que envia a pantalla el menu de estadisticas*/
									 do /*Este ciclo do impide que se ingrese una opcion invalida en el menu estadisticas*/
									 {
										 scanf("%d", &opc);
										 if(opc<1 || opc>9)
											 printf("Opcion Invalida...\n");
									 }
									 while(opc<1 || opc>9);

									 system("cls");
									 switch(opc)/*Switch del menu estadisticas*/
									 {  case 1:{ /*MenuPrincipal->Estadisticas->Lista de clientes*/
															 do/*Ciclo do que permite regresar a la lista de cliente*/
															 { clrscr();
																 printf("####################################\n");
																 printf("############ ALQUILERES ############\n");
																 printf("####################################\n");
																 printf("   ID   �          Nombre          �\n");
																 printf("________�__________________________�\n");

																 if(client<0)
																		mensaje();
																 if(client>=0)
																 {
																	 for(i=0; i<=client; i++)
																	 { printf("    %d   �", i+1);
																		 printf("      %s\n",cliente[i].name);
																		 printf("�����������������������������������\n");
																	 }

																	 printf("**********************************************\n");
																	 printf("                  OPCIONES\n");
																	 printf("**********************************************\n");
																	 printf("1 - Ver informacion detallada de un cliente\n");
																	 printf("2 - Volver al menu estadisticas\n");
																	 do
																	 {
																		 scanf("%d", &opc);
																		 if(opc>2 || opc<1)
																				printf("Opcion invalida...\n");
																	 }
																	 while(opc>2 || opc<1);

																	 switch(opc)
																	 { case 1:{ printf("Ingrese el codigo del cliente: ");
																							scanf("%d", &i);

																							i=i-1;
																							clrscr();
																							printf("********************************\n");
																							printf("      DETALLES DE LA CUENTA  \n");
																							printf("********************************\n");
																							printf("ID Alquiler: %d\n", i+1);
																							printf("Cliente:     %s\n", cliente[i].name);
																							printf("DNI:         %s\n", cliente[i].dni);
																							tipoproducto(cliente[i].codpro);
																							getch();

																							printf("________________________________\n");
																							printf("             OPCIONES           \n");
																							printf("________________________________\n");
																							printf("1 - Regresar a lista de clientes\n");
																							printf("2 - Salir\n");
																							do
																							{  scanf("%d", &opc);
																								 if(opc>2 || opc<1)
																										printf("Opcion invalida...\n");
																							}
																							while(opc>2 || opc<1);



																						}

																	 }/*FIN DEL SWITCH DE LISTA DE CLIENTES*/
																 }/*FIN DEL IF EN CASO DE QUE EXISTAN ESTADISTICAS*/
															 }/*FIN DEL CICLO QUE PERMITE REGRESAR A LA LISTA DE CLIENTE*/
															 while(opc==1);
															 break;
														 }
											case 2:{ /*MenuPrincipal->Estadisticas->Productos Mas Alquilado*/
															 printf("______________________\n");
															 printf("PRODUCTO MAS ALQUILADO\n");
															 printf("______________________\n");

															 if(client<0)
																	mensaje();

															 if(client>=0)
															 {
																 masalq=alquiler[0];
																 temp=0;

																 for(i=0; i<=3; i++)
																 { if(alquiler[i]>masalq)
																	 {  masalq=alquiler[i];
																		 temp=i;
																	 }
																 }

																 printf("Nombre del Producto: ");
																 if(temp==0)
																	printf("TV Shows (Complete Season)\n");
																 else if(temp==1)
																		 printf("Accion/Thriller\n");
																	else if(temp==2)
																				 printf("Romance/Comedy\n");
																			 else if(temp==3)
																							printf("Musical\n");

																 printf("Numero de alquileres: %d\n", masalq);
															 }
															 getch();
															 break;
														 }
											case 3:{ /*MenuPrincipal->Estadisticas->Ingresos Brutos*/
															 printf("________________________\n");
															 printf("    INGRESOS BRUTOS\n");
															 printf("________________________\n");

															 if(client<0)
																 mensaje();

															 if(client>=0)
																 printf("Ingresos brutos: $%d\n", ingresos);

															 getch();
															 break;
														 }
											case 4:{ /*MenuPrincipal->Estadisticas->IVA Recaudado*/
															 printf("________________________\n");
															 printf("     IVA RECAUDADO\n");
															 printf("________________________\n");

															 if(client<0)
																	mensaje();
															 if(client>=0)
																 printf("Monto: %.2f\n", iva);

															 getch();
															 break;
														 }
											case 5:{ /*MenuPrincipal->Estadisticas->Ingresos Netos*/
															 printf("__________________________\n");
															 printf("INGRESOS NETOS (BRUTO-IVA)\n");
															 printf("__________________________\n");

															 if(client<0)
																	mensaje();
															 if(client>=0)
																 printf("Monto: $%.2f\n", neto);

															 getch();
															 break;
														 }
											case 6:{ /*MenuPrincipal->Estadisticas->Promedio de ventas x productos*/
															 printf("_________________________________\n");
															 printf("PROMEDIO DE VENTAS (x PRODUCTOS)\n");
															 printf("_________________________________\n");
															 printf("PRODUCTO         |   PROMEDIO     \n");
															 printf("*********************************\n");

															 if(client<0)
																	mensaje();

															 if(client>=0)
															 {
																 if(alquiler[0]>0)
																 {
																	 temp=((float)alquiler[0]/(client+1))*100;
																	 printf("TV Shows         :    %.2f\n", temp);
																 }

																 else if(alquiler[0]<=0)
																	 printf("TV Shows         :    0.00\n");

																 if(alquiler[1]>0)
																 {
																	 temp=((float)alquiler[1]/(client+1))*100;
																	 printf("Accion/Thriller  :    %.2f\n", temp);
																 }
																 else if(alquiler[1]<=0)
																	 printf("Accion/Thriller  :    0.00\n");

																 if(alquiler[2]>0)
																 {
																	 temp=((float)alquiler[2]/(client+1))*100;
																	 printf("Romance/Comedy   :    %.2f\n", temp);
																 }
																 else if(alquiler[2]<=0)
																	 printf("Romance/Comedy   :    0.00\n");

																 if(alquiler[3]>0)
																 {
																	 temp=((float)alquiler[3]/(client+1))*100;
																	 printf("TV Shows         :    %.2f\n", temp);
																 }
																 else if(alquiler[3]<=0)
																	 printf("TV Shows         :    0.00\n");
															 }
															 getch();
															 break;
														 }
											case 7:{ /*MenuPrincipal->Estadisticas->Producto Menos Alquilado*/
															 printf("________________________\n");
															 printf("PRODUCTO MENOS ALQUILADO\n");
															 printf("________________________\n");

															 if(client<0)
																 mensaje();

															 if(client>=0)
															 {
																 menosalq=alquiler[0];
																 temp=0;

																 for(i=0; i<=3; i++)
																 { if(alquiler[i]<menosalq)
																	 {  menosalq=alquiler[i];
																		temp=i;
																	 }
																 }

																 printf("Nombre del Producto: ");
																 if(temp==0)
																	printf("TV Shows (Complete Season)\n");
																 else if(temp==1)
																		 printf("Accion/Thriller\n");
																	else if(temp==2)
																				 printf("Romance/Comedy\n");
																			 else if(temp==3)
																							printf("Musical\n");

																 printf("Numero de alquileres: %d\n", menosalq);
																 getch();
															 }
															 getch();
															 break;
														 }
											case 8:{ /*MenuPrincipal->Estadisticas->Producto Mas Adquirido*/
															 printf("_______________________________________\n");
															 printf("        PRODUCTO MAS ADQUIRIDO\n");
															 printf("_______________________________________\n");

															 if(adquiridos[0]>0 || adquiridos[1]>0 ||adquiridos[2]>0 ||adquiridos[3]>0)
															 {
																 masadq=adquiridos[0];
																 temp=0;

																 for(i=0; i<=3; i++)
																 { if(adquiridos[i]>masadq)
																	 {  masadq=adquiridos[i];
																		temp=i;
																		}
																 }

																 printf("Nombre del Producto: ");
																 if(temp==0)
																	 printf("TV Shows (Complete Season)\n");
																 else if(temp==1)
																		 printf("Accion/Thriller\n");
																	else if(temp==2)
																				 printf("Romance/Comedy\n");
																			 else if(temp==3)
																							printf("Musical\n");

																 printf("Mas adquiridos: %d\n", masadq);
															 }
															 else
																	mensaje();

															 getch();
															 break;
														 }
												case 9:{c1=2;
																cerrar=0;
																break;
															 }

											default: printf("E");
										}/*Fin del switch estadisticas*/

								 /*Insertar Nuevo menu*/
									 if(opc!=9)
									 {
										 do
										 {
											 printf("_________________________________________\n");
											 printf("##          �Que desea hacer?          ##\n");
											 printf("_________________________________________\n");
											 printf("# 1 - Regresar al menu de estadisticas  #\n");
											 printf("# 2 - Regresar al menu Principal        #\n");
											 printf("# 3 - Cerrar App                        #\n");
											 scanf("%d", &cerrar);

											 if(cerrar<1 || cerrar>3)
											 {
												 clrscr();
												 printf("Usted Ingreso %d ....Opcion Invalida...\n", cerrar);
											 }
										 }
										 while(cerrar<1 || cerrar>3);

										 if(cerrar==3)
											 c1=1;
										 else if(cerrar==1 || cerrar==2)
														c1=2;

									 }/*Fin del if menu �que desea hacer? de menu estadisticas*/

									 if(cerrar==3)
											c1=1;
								 }
								 while(cerrar==1); /*Fin del ciclo que permite regresar al menu anterior*/
								 break;

							 }/*Fin del menu estadisticas*/
				case 4:{ /*Menu Principal->Tabla de producto*/
								 tabla();
								 break;
							 }
			}/*FIN DEL SWITCH DEL MENU PRINCIPAL*/


		 if(c1!=1 && c1!=2)
		 {
			 do
			 { printf("___________________________________\n");
				 printf("##        �Que desea hacer?      ##\n");
				 printf("___________________________________\n");
				 printf("# 1 - Regresar al menu principal  #\n");
				 printf("# 2 - Cerrar App                  #\n");
				 scanf("%d", &cerrar);
				 if(cerrar<1 || cerrar>2)
				 {
						system("cls");
						printf("Usted Ingreso %d ....Opcion Invalida...\n", cerrar);
				 }
			 }
			 while(cerrar<1 || cerrar>2);

			 if(cerrar==2)
				 c1=1;

		 }/*Fin del if �Que desea hacer? general*/
		}
	}/*FIN DE TODO EL CICLO*/
	while(c1!=1);

	return 0;
}/*FIN DEL MAIN*/

/*FUNCIONES*/
void menup()
{ printf("*********************************************\n");
	printf("*****************LEGAL-DVD*******************\n");
	printf("*********************************************\n");
	printf("1 - Agregar Nuevo Alquiler\n");
	printf("2 - Ver Inventario\n");
	printf("3 - Mostrar Estadisticas de la Tienda\n");
	printf("4 - Ver Tabla de Productos\n");
	printf("5 - Cerrar Aplicacion\n");
}

void menuestadisticas()
{ printf("____________________________________\n");
	printf("     ESTADISTICAS DE LA TIENDA\n");
	printf("____________________________________\n");
	printf("1 - Lista de Clientes\n");
	printf("2 - Producto Mas Alquilado\n");
	printf("3 - Ingresos Bruto de la tienda\n");
	printf("4 - IVA Recaudado\n");
	printf("5 - Ingresos netos de la tienda\n");
	printf("6 - Promedio de ventas por productos\n");
	printf("7 - Producto menos alquilado\n");
	printf("8 - Producto mas adquirido\n");
	printf("9 - Volver al menu principal\n");
}

void tabla()
{
	system("cls");
	printf("*******************************************************************************\n");
	printf("*____________________________________________________________________________ *\n");
	printf("*                �           PRECIOS           �        DIAS DE PRESTAMO     �*\n");
	printf("*     TIPO       ���������������ĺ������������ĺ��������������ĺ������������ĺ*\n");
	printf("*                �  Preferencial � No Afiliado �  Preferencial � No Afiliado �*\n");
	printf("*________________�_______________�_____________�_______________�_____________�*\n");
	printf("*TV Shows        �     $12,000   �   $16,000   �       7       �      4      �*\n");
	printf("*________________�_______________�_____________�_______________�_____________�*\n");
	printf("*Accion/Thriller �     $ 4,500   �   $ 9,000   �       3       �      1      �*\n");
	printf("*________________�_______________�_____________�_______________�_____________�*\n");
	printf("*Romance/Comedy  �     $ 3,700   �   $ 7,400   �       4       �      2      �*\n");
	printf("*________________�_______________�_____________�_______________�_____________�*\n");
	printf("*Musical         �     $ 3,000   �   $ 6,000   �       5       �      3      �*\n");
	printf("*�����������������������������������������������������������������������������*\n");
	printf("*******************************************************************************\n");
	getch();
}

void mensaje()
{
	printf("************************************\n");
	printf("�    AUN NO EXISTEN ESTADISTICAS   �\n");
	printf("�          PARA ESTE CAMPO         �\n");
	printf("************************************\n");
}

void tipoproducto(int op)
{
	printf("Producto: ");
	if (op==0)
		 printf("TV Show\n");
	else if(op==1)
				 printf("Accion/Thriller\n");
			 else if(op==2)
							printf("Romance/Comedy\n");
						 else if(op==3)
										printf("Musical\n");
}
