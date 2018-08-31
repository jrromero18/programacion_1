#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
//creacion de bibliotecas
// ducumentar la funcion
// cada funcion se declrara una parte del stack
// la funcion guarda las variables, parametros y lo que retorna lo guarda en la memora (stak de la funcion.
// cuando la funcion se ejecuta se saca del espacio que teniar reservado.


int main()
{
    int numero;
    if(utn_getNumero(&numero,"NUMERO?","Fuera del rango",10,100,2)==0)
    {
        printf("El numero es %d",numero);

    }
    return 0;
}
