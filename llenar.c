 #include <stdio.h>
     
    //función para llenar el arreglo
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
     
    //Función para mostrar el arreglo
    void mostrar(int A[], int n)
    {
        int i;
        for(i=0; i        {
            printf("Valor A[%d] = %d\n",i,A[i]);
        }
    }
     
    //función para sumar los elementos del arreglo
    int suma(int A[], int n)
    {
        int i;
        int s = 0;
        for(i=0; i        {
            s = s + A[i];
        }
        return s;
    }
     
    //Función para determinar el elemento mayor
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
     
    //Función para buscar un elemento
    int buscar(int A[], int n, int e)
    {
        //Definimos variables
        int i;
        int esta = 0;
        //Ciclo de análisis
        for(i=0; i        {
            //Fácil si el valor del elemento
            //es igual al parámetro e recibido
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
        //Regresamos como valor de la función
        //el valor de la variable donde fué hallado
        //o de lo contrario cero que es su inicialización.
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
        //Mostramos un título y ejecutamos la función sumar.
        printf("La suma total de valores es %d\n",suma(arreglo,totalelementos));
        //Mostramos info y llamamos a la función mayor
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
            //Informamos que fué hallado
            printf("El valor %d fue hallado en la posicion %d\n",valorbuscado,resultado);
        }
        else
        {
            //Informamos que no fué hallado.
            printf("El valor %d no se encuentre en el array\n",valorbuscado);
        }
    }
