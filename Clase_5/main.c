#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int retornarTotal(int listado[], int tamanio);
int retornarPromedio(int listado[], int tamanio);
int void cargarListado(int listado[],int tamanio);




int main()
{
    int numeroIngresado;
    int listadoDeNotas[CANTIDAD]; //creacion del array
    int i;
    int mayor;
    int menor;
    int sumaDeNotas=0;
    int promedio=0;
    //sizeof determina el tamanio de una variable

/*
    printf("Tamaño :%d",sizeof(numeroIngresado));
    printf("Tamaño :%d",sizeof(listadoDeNotas));
    printf("Tamaño :%d",&numeroIngresado); //variable
    printf("Tamaño :%d",listadoDeNotas);

    for (i=0;i<10;i++)
    {
        printf("\n Direccion c/u :%d",listadoDeNotas[i]);  //& direcion se ve  sin el & se ve el valor
    }
*/



    for (i=0;i<CANTIDAD;i++)
    {
        printf("\n ingrese nota :%d :",i);
        scanf("%d",&numeroIngresado);

        listadoDeNotas[i]=numeroIngresado;

    }


    for (i=0;i<CANTIDAD;i++)
    {
        printf("\n la nota es :%d",listadoDeNotas[i]);
    }

    //funcion que muestre el maximo


    for (i=0;i<CANTIDAD;i++)
    {
        if( i==0 || listadoDeNotas[i]>mayor)
        {
            mayor=listadoDeNotas[i];

        }

    }

    for (i=0;i<CANTIDAD;i++)
    {
        if( i==0 || listadoDeNotas[i]<menor)
        {
            menor=listadoDeNotas[i];

        }

    }


    for (i=0;i<CANTIDAD;i++)
    {
        sumaDeNotas=sumaDeNotas+listadoDeNotas[i];
    }


    promedio=sumaDeNotas/i;

    printf("\n \n el mayor es : %d",mayor);
    printf("\n el menor es : %d",menor);
    printf("\n  la suma de las notas es : %d",sumaDeNotas);
    printf("\n  el promedio es : %d",promedio);
    return 0;
}

int retornarTotal(int listado[], int tamanio)
{
    int sumaDeNotas=0;
    int i;
    for (i=0;i<CANTIDAD;i++)
    {
        sumaDeNotas=sumaDeNotas+listadoDeNotas[i];
    }

}

int retornarPromedio(int listado[], int tamanio)
{
    int suma;
    int promedio;
    suma = retornarTotal(listado,tamanio);
    promedio=suma/tamanio;
    return promedio;



}
