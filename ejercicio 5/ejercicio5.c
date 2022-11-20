/*
Ingresar una palabra en mayúsculas (controlar) y eliminar de la misma la cadena "CA"
cada vez que la encuentre.
Ejemplos: 
Ingresa: CASCARA --> Presenta: SRA
Ingresa: CASONA --> Presenta: SONA
Ingresa: CASACA --> Presenta: SA



*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define maxima_longitud 100

int main(){

    char palabra[maxima_longitud];
    char mayusculas[maxima_longitud];
    int i;

    //ingreso de palabra

    printf("Ingrese una palabra: ");
        gets(palabra);

    //funcion para pasar a mayusculas

    strcpy(mayusculas, palabra);
    
    strupr(mayusculas);

   for ( i = 0; mayusculas[i]!='\0'; i++)
    {
            if(mayusculas[i]=='C'){
                                mayusculas[i]=' ';
                               }
             if(mayusculas[i]=='A'){
                                mayusculas[i]=' ';
                                }

    }
    printf("%s\n",mayusculas);	

    return 0;
}
