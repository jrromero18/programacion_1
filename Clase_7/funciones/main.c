#include <stdio.h>
#include <stdlib.h>




int main()
{


char auxiliarNombreStr[50];

if (!getStringLetras("Ingrese el nombre: ",auxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");

                }

    return 0 ;
}
