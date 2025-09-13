#include <stdio.h>

void main(){

    char c;

    printf("Ingrese caracteres hasta presionar un '0' o '1'\n");

    do{
        fflush(stdin);
        c=getchar();
        if(c=='1')break;
    }while(c!='0');

    printf("Usted presiono un <%c>",c);

}
