#include<stdio.h>


int main(){
     char vector[20];

     printf("introduce una frase: ");
     fgets(vector,20,stdin);

     printf("%s \n\n", vector);


    return 0;
}