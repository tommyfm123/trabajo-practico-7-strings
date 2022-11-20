
/*
Ingresar una palabra y generar una nueva donde se han reemplazado las vocales de la
palabra ingresada, por asteriscos (*). Presentar ambas palabras.
Ejemplo: Ingresa: restaurant
Presenta: restaurant R*ST**R*NT

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[]){
    char palabra[20];
    int i;

    printf("ingrese una palabra: ");
        gets(palabra);

// con esto reemplazaremos las letras por alteriscos.
    for ( i = 0; palabra[i]!='\0'; i++)
    {
             if(palabra[i]=='e'){
                                palabra[i]='*';
                                }
             if(palabra[i]=='i'){
                                palabra[i]='*';
                                }
             if(palabra[i]=='o'){
                                palabra[i]='*';
                                }
             if(palabra[i]=='u'){
                                palabra[i]='*';
                                }    
                }
    
    printf("%s\n",palabra);	
    return 0;
}           if(palabra[i]=='a'){
                                palabra[i]='*';
                               }
 
       
 