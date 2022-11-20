/*

Ingresar una palabra, en minúsculas, y presentarla en mayúsculas e invertida.
Ejemplo: Ingresa: universidad
Presenta: DADISREVINU

i = contador del primer vector
j = contador del segundo vector
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char*argv[])
{
	char  cadena[50];
    char invertida[50];
	int   i,j=0;
	
	printf("Ingrese una cadena de caracter: ");
		gets(cadena); //esto toma todo el valor de una
	
	strupr(cadena);//convierte toda la cadena en mayuscula
		
	for(i=strlen(cadena)-1; i>=0; i--)
	{
		invertida[j]=cadena[i];//invierte la cadena y la copia en invertida
		j++;
	}
	printf("\n* La cadena ingresada es: %s ",cadena);
	printf("\n* La cadena invertida es: %s ",invertida);
	
return 0;
}
