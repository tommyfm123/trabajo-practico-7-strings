/*
Ingresar una palabra y contar cuantas vocales posee.
 Presentar por pantalla el resultado. 

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[]){
    char palabra[20];
    int i;
    int vocal;
    vocal = 0;

    printf("ingrese una palabra: ");
        gets(palabra);

// con esto contaremos cuantas vocales tiene una palabra
    for ( i = 0; palabra[i]!='\0'; i++)
    {
             if(palabra[i]=='a'){
                                vocal++;
                                }
             if(palabra[i]=='e'){
                                vocal++;
                                }
             if(palabra[i]=='i'){
                                vocal++;
                                }
             if(palabra[i]=='o'){
                                vocal++;
                                }    
             if(palabra[i]=='u'){
                                vocal++;
                                } 
                }
    
    printf("la palabra %s posee %d vocales",palabra ,vocal);	
    return 0;
    }
        
 