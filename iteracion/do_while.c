#include <stdio.h>

void main(){

    int n;

    printf("Ingrese numeros, hasta que uno sea superior a 100\n");

    do{
        fflush(stdin);
        scanf("%d",&n);
    }while(n<101);

    printf("Fin del programa.");

}
