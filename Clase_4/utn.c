#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

static void myFpurge()
{
    __fpurge(stdin);
    //fflush(stdin);
}


static int getInt(int* numeroIngresado)
{
    myFpurge();
    return scanf("%d",numeroIngresado);
}

static int getFlot(float* numeroIngresado)
{
    myFpurge();
    return scanf("%f",numeroIngresado);
}

static int getChar(char* caracterIngresado)
{
    myFpurge();
    return scanf("%c",caracterIngresado);
}

static int getString(char textoIngresado)
{
    myFpurge();
    return scanf("%s",textoIngresado);
}
/**
*\brief Solicita un numero al usuario, valida y devuelve el resultado
*\param pResultado puntero a la variable resultado
*\param mensaje Es el mensaje a ser mostrado
*\param mensajeError Es el mensaje a ser mostrado en caso de error
*\param minimo ES el numero minimo aceptado
*\param maximo ES el numero maximo aceptado
*\param reintentos Es la cantidad de reintentos que tiene el usuario
*\return En caso de exito retorna 0 y en caso de error -1
*/


int utn_getNumero(  int * pResultado,//donde voy a dejar el resultado
                    char  mensaje[],//recibe un array
                    char  mensajeError[],
                    int   minimo,
                    int   maximo,
                    int   reintentos)
{

    int numeroIngresado;

    while(reintentos>0)
    {
        printf("%s",mensaje);
        if(getInt(&numeroIngresado)==1)

        {
            if (numeroIngresado>minimo && numeroIngresado<maximo)
            {
                break;
            }
            else
            {
            reintentos--;
            printf(mensajeError);
            }
        }

    }
    if(reintentos==0)
    {
    return-1;
    }
    else
    {
        *pResultado=numeroIngresado;
        printf("el numer ingresado esta dentro de los parametros");
        return 0;
    }

}

/**
*\brief Solicita un caracter al usuario, valida y devuelve el resultado
*\param pResultado puntero a la variable resultado
*\param mensaje Es el mensaje a ser mostrado
*\param mensajeError Es el mensaje a ser mostrado en caso de error
*\param minimo ES el caracter minimo aceptado
*\param maximo ES el caracter maximo aceptado
*\param reintentos Es la cantidad de reintentos que tiene el usuario
*\return En caso de exito retorna 0 y en caso de error -1
*/

int utn_getCaracter(  char * pResultado,//donde voy a dejar el resultado
                      char  mensaje[],//recibe un array
                      char  mensajeError[],
                      char  minimo,
                      char  maximo,
                      int   reintentos)

{
return 0;
}


