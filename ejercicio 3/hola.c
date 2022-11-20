#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i;
    char palabra[20];
    printf("Introduce la palabra: \n");
    gets(palabra);
    for(i=0;palabra[i]!='\0';i++){
                      if(palabra[i]=='a'){
                                    palabra[i]='*';
                                    }
                      else if(palabra[i]=='e'){
                                    palabra[i]='*';
                                    }
                      else if(palabra[i]=='i'){
                                    palabra[i]='*';
                                    }
                      else if(palabra[i]=='o'){
                                    palabra[i]='*';
                                    }
                      else if(palabra[i]=='u'){
                                    palabra[i]='*';
                                    }
                      }
    printf("%s\n",palabra);
    system("PAUSE");	
    return 0;
}