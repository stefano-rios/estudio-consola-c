#include <stdio.h>

void main(){
    char c;
    c='1';

    printf("Ingrese numeros, use un 0 para salir\n");

    while(c!='0'){
        fflush(stdin);
        c=getchar();
    }

    printf("Fin del programa.");
}
