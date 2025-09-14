#include <stdio.h>

void main(){


    /*31- Hacer el algoritmo que nos permita
    introducir un número por teclado y nos informe si es
    positivo o negativo.

    int n;
    printf("Ingrese un numero por favor\n");
    fflush(stdin);
    scanf("%d",&n);

    if(n>0)printf("El numero <%d> ES POSITIVO",n);
    else printf("El numero <%d> ES NEGATIVO",n);
    */

    /*34- Diseñar el algoritmo necesario para que habiéndose
    leído el valor de 2 variables
    NUM1 y NUM2 se intercambien los valores de las variables,
    es decir que el valor
    que tenía NUM1 ahora lo contenga NUM2 y viceversa.

    int n1,n2,aux;

    printf("Ingrese dos numeros seguidos de un espacio\n");
    scanf("%d %d",&n1,&n2);
    aux=n1;
    n1=n2;
    n2=aux;

    printf("Intercambio de numeros: n1 = <%d> n2 = <%d>",n1,n2);
    */

    /*35- Escribir un enunciado C para conseguir lo siguiente:
    a) Ingresar un texto carácter a carácter hasta que se ingrese ’#’,
    sin almacenar dicho
    texto.

    char c;

    printf("Ingrese caracteres use # para finalizar el programa\n");

    do{
        fflush(stdin);
        c = getchar();

    }while(c!='#');

    printf("Fin del programa");
    */

    /*b)  Ingresar un texto carácter a carácter hasta que se active
    el EOF, sin almacenar dicho
    texto (para activar el EOF utilizar ctrl+Z
    en entorno windows y ctrl+D en compiladores on
    line).

    char c;
    c='c';
    printf("Ingrese caracteres hasta el EOF\n");
    while(c!=EOF){
        fflush(stdin);
        c=getchar();
    }

    printf("Fin del programa");

    */









}
