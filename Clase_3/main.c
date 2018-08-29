#include <stdio.h>
#include <stdlib.h>


/*creacions de funciones
"*" es operador de indirreccion


int main()
{


int edad;
int* pEdad;
edad = 5;

pEdad = & edad;
*pEdad = 8; // apunta a edad es el puntero
printf("%d/n",edad);
printf("%d/n",*pEdad);


    return 0;
}
*/

int pedirEdad();
int validarEdad(int edad, int minimo, int maximo);


int main()
{

    int edad;

    edad = pedirEdad();
    printf("la edad ingresada es: %d",edad);
}

int validarEdad(int edad, int minimo, int maximo)
{
    int contador;
    contador=0;
    while (edad>maximo || edad<minimo)
    {
        contador++;
        if (contador==3)
        {
            edad = -1;
            break;
        }
        printf("Ingrese una edad ");
        scanf("%d",&edad);
    }
    return edad;
}
int pedirEdad()
{
    int edad;
    printf("Ingrese la edad ");
    scanf("%d",&edad);
    edad = validarEdad(edad,1,100);
    return edad;
}
