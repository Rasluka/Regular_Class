 #include <stdio.h>
     
    //funci�n para llenar el arreglo
    void llenar(int A[], int n)
    {
        int i;
        int valor;
        for(i=0; i        {
            printf("Ingrese valor %d : ",i);
            scanf("%d",&valor);
            A[i] = valor;
        }
    }
     
    //Funci�n para mostrar el arreglo
    void mostrar(int A[], int n)
    {
        int i;
        for(i=0; i        {
            printf("Valor A[%d] = %d\n",i,A[i]);
        }
    }
     
    //funci�n para sumar los elementos del arreglo
    int suma(int A[], int n)
    {
        int i;
        int s = 0;
        for(i=0; i        {
            s = s + A[i];
        }
        return s;
    }
     
    //Funci�n para determinar el elemento mayor
    //del arreglo
    int mayor(int A[], int n)
    {
        int i;
        int mayorval = A[0];
        for(i=0; i        {
            if(A[i] > mayorval)
            {
                mayorval = A[i];
            }
        }
        return mayorval;
    }
     
    //Funci�n para buscar un elemento
    int buscar(int A[], int n, int e)
    {
        //Definimos variables
        int i;
        int esta = 0;
        //Ciclo de an�lisis
        for(i=0; i        {
            //F�cil si el valor del elemento
            //es igual al par�metro e recibido
            if(A[i] == e)
            {
                //asignamos a la variable
                //el valor de i que es el
                //numero de elemento que es igual
                esta = i;
                //Rompemos el bucle y salimos
                break;
            }
        }
        //Regresamos como valor de la funci�n
        //el valor de la variable donde fu� hallado
        //o de lo contrario cero que es su inicializaci�n.
        return esta;
    }
     
    //Procedimiento principal
    int main()
    {
        //Definimos el arreglo
        int arreglo[100];
        //Variables para el total de elementos y valor buscado
        int totalelementos, valorbuscado;
        //Solicitamos info
        printf("Ingrese cantidad de valores a examinar : ");
        scanf("%d",&totalelementos);
        //Ejecutamos las funciones llenar y mostrar.
        llenar(arreglo,totalelementos);
        mostrar(arreglo,totalelementos);
        //Mostramos un t�tulo y ejecutamos la funci�n sumar.
        printf("La suma total de valores es %d\n",suma(arreglo,totalelementos));
        //Mostramos info y llamamos a la funci�n mayor
        printf("El mayor valor es %d\n",mayor(arreglo,totalelementos));
        //Solicitamos un valor para buscar
        printf("Ingrese valor a buscar : ");
        scanf("%d",&valorbuscado);
        //Variable para obtener el resultado
        int resultado = 0;
        resultado = buscar(arreglo,totalelementos,valorbuscado);
        //Si es mayor a cero
        if (resultado>0)
        {
            //Informamos que fu� hallado
            printf("El valor %d fue hallado en la posicion %d\n",valorbuscado,resultado);
        }
        else
        {
            //Informamos que no fu� hallado.
            printf("El valor %d no se encuentre en el array\n",valorbuscado);
        }
    }
