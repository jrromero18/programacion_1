#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6
/*
int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50];
    int i;

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i],50, "\nNombre?","\nError",2);

    }

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%s\n",nombres[i]);

    }
    return 0;
}



*/



void ordenarPorNombre(char pNOmbres[][50], char pApellido,char*pDni, int limite)

{

    int swap;
    int i;
    char bufferStr[256];
    do
    {
        swap= 0; //se pone en falso
        for(i=0;i<limite-1;i++)
        {
           if (strcmp(pNOmbres[i],pNOmbres[i+1]) >0)
            {
                strcpy(bufferStr,pNOmbres[i]);
                strcpy(pNOmbres[i],pNOmbres[i+1]);
                strcpy(pNOmbres[i+1],bufferStr);

                strcpy(bufferStr,pApellido[i]);
                strcpy(pApellido[i],pApellido[i+1]);
                strcpy(pApellido[i+1],bufferStr);

                strcpy(bufferStr,pDni[i]);
                strcpy(pDni[i],pDni[i+1]);
                strcpy(pDni[i+1],bufferStr);



            }

        }


    }while(swap);



}



int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50] ={"AAA","CCC","BBB"};
      char apellido[CANTIDAD_EMPLEADOS][50] ={"AAA","CCC","BBB"};
        char dni[CANTIDAD_EMPLEADOS][50] ={"AAA","CCC","BBB"};
    int i;

    ordenarPorNombre(nombres,apellido,dni,CANTIDAD_EMPLEADOS);

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%s,%s,%s",nombres[i],apellido[i],dni[i]);

    }
    return 0;
}
