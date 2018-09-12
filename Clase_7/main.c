#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char usuario[6];
    char clave [9];
    char auxUser[]="admin\n";
    char auxClave[]="admin\n";

    printf("\n usuario: *");
    fgets(usuario,16,stdin);
    __fpurge(stdin);

    printf("\n clave: *");
    fgets(clave,9,stdin);
     __fpurge(stdin);



    int otroAux = strlen(usuario);
    printf("tamanio %d \n",otroAux);


    printf("\n c:%s u:%s",clave,usuario);
    int retorno;
    retorno = strcmp (usuario,clave);
    printf("retorno %d \n",retorno);

    if(strcmp(usuario,auxUser)==0 && strcmp(clave,auxClave)==0)
    {
    /*
    strcmo compara para verdero o falso
    9-7= +2
    9-9= 0
    7-9= -2
    */
        printf("ingreso");


    }else{
        printf("ERROR");
    }




/*
    char nombre [10];
    char apellido [10];
    char localidad [10];
    int tamanio;
/*
    tamanio= sizeof(nombre);
    printf("antes:%d \n",tamanio);

    printf("INGRese el nombre:\n");
    scanf("%s",nombre);

    tamanio= sizeof(nombre);
    printf("despues:%d \n",tamanio);

    printf("\nl nombre ingresado es: %s y usted es..." ,nombre);
*//*
    fgets(nombre,10,stdin);
    __fpurge(stdin);
    fgets(apellido,10,stdin);
     __fpurge(stdin);
    fgets(localidad,10,stdin);
     __fpurge(stdin);




        printf("\nEl apellido ingresado es: %s y usted es %s... %s" ,nombre,apellido,localidad);*/

    return 0;
}
