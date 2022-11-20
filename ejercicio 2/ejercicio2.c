/*
Ingresar una palabra y generar una nueva palabra que contenga las mismas letras, en
mayúsculas, que la ingresada pero separadas por un espacio. Mostrar ambas palabras
Ejemplo: Ingresa: vestimenta
Presenta: vestimenta    V E S T I M E N T A


*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

    char palabra[20];
    char palabraNueva[20];
    int i;

//ingreso de palabra
printf("ingresar una palabra: ");
    gets(palabra);

//impresion de palabra
printf("la palabra ingresada es: %s \n",palabra);

strcpy(palabraNueva, palabra);
//palabra a mayusculas
strupr(palabraNueva);

printf("la palabra ingresada en mayusculas y con espacio es esta: ");
for ( i = 0; i < strlen(palabraNueva); i++)
{
    printf("%c ", palabraNueva[i]);
}

return 0;
}
