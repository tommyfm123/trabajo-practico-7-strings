/*
Ingresar dos nombres y un apellido, todos en minúsculas, y presentar el apellido y los dos
nombres (con la primera letra en mayúsculas) separados solamente por guiones.
Ejemplo: Ingresa: esteban manuel torres
Presenta: Torres-Esteban-Manuel



*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAXIMA_LONGITUD 20

int main(){

    char nombre1[MAXIMA_LONGITUD];
    char nombre2[MAXIMA_LONGITUD];
    char apellido[MAXIMA_LONGITUD];
    char PrimeraLeN1[MAXIMA_LONGITUD];
    char PrimeraLeN2[MAXIMA_LONGITUD];
    char PrimeraLeA[MAXIMA_LONGITUD];
    int i;

    //ingreso de datos

    printf("ingrese el primer nombre: ");
        gets(nombre1);
    printf("ingrese el segundo nombre: ");
        gets(nombre2);
    printf("ingrese el apellido: ");
        gets(apellido);


//funciona para poner a mayusculas todas las primeras letras de cada vector
    
    PrimeraLeN1 = nombre1[0];
    PrimeraLeN2 = nombre2[0];
    PrimeraLeA = apellido[0];
    
    strcpy(PrimeraLeN1, nombre1);
    strcpy(PrimeraLeN2, nombre2);
    strcpy(PrimeraLeA, apellido);

    strupr(PrimeraLeN1);
    strupr(PrimeraLeN2);
    strupr(PrimeraLeA);

  
    printf("%s%s - %s%s - %s%s", PrimeraLeA,apellido[1],PrimeraLeN2, nombre2[1], PrimeraLeN1, nombre1[1]);

return 0;

}