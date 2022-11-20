/*
Ingresar una palabra que posea por lo menos 5 caracteres (no permitir que ingrese una
palabra más corta), convertir sus caracteres a mayúsculas y con esta palabra generar una
nueva palabra constituida por los dos primeros y los dos últimos caracteres de la misma.
Ejemplo: 
Ingresa: popularidad
Presenta: POPULARIDAD POAD 
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define maxima_longitud 100

int main(){
    char palabra[maxima_longitud];
    char mayusculas[maxima_longitud];

//ingreso de palabra
    printf("\n------------------------------------------------------\n");
    printf("\n ingrese una palabra de mas de 5 caracteres: \n");
        gets(palabra);
    printf("\n------------------------------------------------------\n");

// condicion para saber si es menor a 5 caracteres     
if (strlen(palabra) < 5)
{
    printf("\n------------------------------------------------------\n");
    printf("\n Debe ingresar una palabra mayor a 5 caracteres. \n");
    printf("\n------------------------------------------------------\n");
} 

//funcion para poner mayusculas
strcpy(mayusculas, palabra);

strupr(mayusculas);

//funcion para imprimir los dos primeros caracteres y los dos ultimos

printf("%c", mayusculas[0]); 
printf("%c",mayusculas[1]);
printf("%c",mayusculas[strlen(mayusculas)-2]);
printf("%c",mayusculas[strlen(mayusculas)-1]);




return 0;

}