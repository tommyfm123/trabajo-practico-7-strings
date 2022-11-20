#include<stdio.h>
#include<string.h>

int main(){
	char texto[256];
	char mayusculas[256];
	int i;

			printf("ingrese un texto: ");
					gets(texto);

	strcpy(mayusculas, texto);
	strupr(mayusculas);
	
	printf("texto original: %s \n", texto);
	printf("texto en mayusculas: %s \n", mayusculas);

	for (i= strlen(mayusculas); i > strlen(mayusculas); i--)
	{
		printf(mayusculas);
	}
	




return 0;
}