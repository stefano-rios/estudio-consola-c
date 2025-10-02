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

    /* Codificar en C un algoritmo que permita ingresar 6 números,
    ninguno de ellos igual a cero. Se pide sumar los positivos,
    obtener el producto de los negativos y luego mostrar ambos resultados.

    int suma,multiplicacion,n;

    multiplicacion = 1;
    suma = 0;

    printf("Ingrese 6 numeros, por favor\n");

    for(int x=0; x<6; x++){
        fflush(stdin);
        scanf("%d",&n);

        if(n<0){
            multiplicacion = multiplicacion * n;
        }
        else if (n>0){
            suma = suma + n;
        }
        else {
            printf("Usted presiono un 0\n");
            break;
        }
    }

    printf("Suma = <%d>, Multuplicacion = <%d>",suma,multiplicacion);
    */


    /*52- Calcular la media de los números
    de una lista de n números ingresados por teclado
    (n se ingresa por teclado).

    int n,media,men,may,aux;

    printf("¿ Cuantos numeros desea ingresar ?\n");
    fflush(stdin);
    scanf("%d",&n);

    printf("Ingrese <%d> numeros\n",n);

    fflush(stdin);
    scanf("%d",&aux);
    men=may=aux;

    for(int x=1; x<n; x++){
        fflush(stdin);
        scanf("%d",&aux);

        if(aux<men){
            men = aux;
        }
        else if(aux>may){
            may = aux;
        }
    }

    media = (men+may) / 2;

    printf("La media es = <%d>",media);
    */

    /*54- Realizar la tabla de multiplicar de un número
     entre 0 y 10 de forma que se visualice de la
    siguiente forma:
    4x1= 4
    4x2= 8
    ..........

    int n;
    printf("¿ De que numero quiere la tabla de multiplicar ?\n");

    fflush(stdin);
    scanf("%d",&n);

    for(int x=1; x<=10; x++){
        printf("%dx%d = %d\n",n,x,(n*x));
    }

    printf("Fin del programa");
    */

    /*55- Hacer un algoritmo que muestre el mayor y
    el menor de una serie de 5 números que vamos introduciendo por teclado.


    int n,may,men;

    printf("Ingrese una serie de 5 numeros por teclado\n");

    fflush(stdin);
    scanf("%d",&n);
    may=men=n;

    for(int x=0; x<4; x++){
        fflush(stdin);
        scanf("%d",&n);

        if(n<men)men=n;
        else if (n>may)may=n;
    }

    printf("El numero mayor es <%d> y el menor es <%d>", may,men);
    */

    /*56- Escribir un programa que solicite el ingreso de un número
    entero y a partir de él, genere una cuenta regresiva hasta cero,
    mostrando los sucesivos valores hasta el último.

    int n;
    printf("Ingrese un numero entero\n");
    fflush(stdin);
    scanf("%d",&n);
    printf("Comienza la cuenta regresiva...\n");
    for(int x=n; x>=0; x--){
        printf("<%d>\n",x);
    }
    */

    /*58 Ingresar caracteres hasta formar palabras y contarlas, es válido
    contar cantidad de espacio

    int n,cont;
    cont=1;
    char c;

    printf("Ingrese oraciones caracter a caracter. #-para salir\n");

    do{
        fflush(stdin);
        n=getche();
        printf("\n");

        if(n==' '){
            cont++;
        }

    }while(n!='#');

    printf("Usted ingreso <%d> palabras",cont);
    */





}
