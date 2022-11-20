#include<stdio.h>
#include<string.h>
int main (){

    char vector1[5];
    char vector2[5];

    printf("introduce la primera frase: ");
        fgets(vector1, 5, stdin);
        
    printf("introduce la segunda frase: ");
        fflush(stdin); 
        //eso sirve para limpiar el buje , es decir , el stdin anteior que ya fue usado
        fgets(vector2, 5, stdin);

    //comparacion de los strings
        //esta es la manera correcta de comparar un numero
    if(strcmp(vector1,vector2)== 0){
       
        printf("los dos strings son iguales");
    } else{
        printf("los dos strings no son iguales");
    }


    return 0;
}