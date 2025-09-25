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

    /*38- Mostrar una tabla que contenga los valores de peso
    y costo, variando el peso desde 2
    hasta 20 con un incremento de 6, si el costo mínimo es
    de $50 y se incrementa en $15 y
    cada 6 kg. Utilizar un bucle for y constantes simbólicas donde
    se considere útil.

    int costoMin, pesoMin;

    int y=50 ; //costMin
    int x=2 ; //pesoMin

    printf("Mostraremos los costos por su peso en la tabla:\n");

    for(x,y ; y<96 ; x+=6, y+=15){
        printf("Peso = <%d>\tCosto = <%d>\n",x,y);
    }
    */

    /*41- Ingresar n números y calcular su media.
    media = (nromayor + nromenor) / 2.

    int n,media,mayor,menor;


    printf("Ingrese numeros y le diremos su media... 0 para salir\n");

    fflush(stdin);
    scanf("%d",&n);
    mayor=menor=n;

    do{
        fflush(stdin);
        scanf("%d",&n);
        if (n!=0){
        if(n>mayor)mayor=n;
        if(n<menor)menor=n;
        }

    }while(n!=0);

    media=(mayor+menor)/2;

    printf("Su numero mayor fue <%d>, el menor fue <%d>, y su media es <%d>",mayor,menor,media);
    */


    /*45- Codificar en C un programa que lea 10 caracteres
    indique cuántas "a" se ingresaron, cuantas "e, i, o, u".

    char c;
    int i;
    int ca,ce,ci,co,cu; //contadores de cada vocal

    ca=ce=ci=co=cu=0;

    printf("Ingrese 10 caracteres\n");

    for(i=0;i<10;i++){
        fflush(stdin);
        c=getchar();

        switch(c){
        case 'a':
            ca++;
            break;
        case 'e':
            ce++;
            break;
        case 'i':
            ci++;
            break;
        case 'o':
            co++;
            break;
        case 'u':
            cu++;
            break;
        }

    }

    printf("A = %d, E = %d, I = %d, O = %d, U = %d",ca,ce,ci,co,cu);
    */









}
