#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

void mostrarArreglo(int ar[], int n){
    for(int a=0; a<n; a++){
        printf("%d\n",ar[a]);
    }
}

void cargaArreglo(int ar[], int n){
    for(int a=0; a<n; a++){
        fflush(stdin);
        scanf("%d",&ar[a]);
    }
}

void busquedaMayorMenor(int ar[], int n){
    int min,may;
    min=may=ar[0];
    for(int x=1; x<n; x++){
        if (ar[x] > may) may = ar[x];
        if (ar[x] < min) min = ar[x];
        }

    printf("El mayor es %d\n",may);
    printf("El menor es %d\n",min);
    }

void busquedaProm(int ar[], int n){
    int prom=0;
    for(int x=0; x<n; x++){
        prom=prom+ar[x];
    }
    prom = prom / n;
    printf("El promedio es %d\n",prom);
}




void main(){

    /*
    63- Escribir un programa que permita el ingreso de 5 números, los almacene en un
    arreglo, luego ingrese otro número y determine entre los anteriores cuales son
    mayores o iguales al último número ingresado. Con los mayores calcular su sumatoria y
    mostrar:
    LA SUMATORIA DE LOS NÚMEROS MAYORES QUE nro_ingresado ES sumatoria.

    int n,sumatoria;
    sumatoria=0;
    n=10;
    int numeros[5];
    printf("Ingrese 5 numeros por favor\n");


    for(int a=0; a<5; a++){
        fflush(stdin);
        scanf("%d",&numeros[a]);

        if(numeros[a]>=n){
            sumatoria+=numeros[a];
        }
    }

    printf("Esta es la sumatoria de numeros >= a [%d] -> [%d]",n,sumatoria);
    */

    /*
    64- Escribir un programa que ingrese y almacene 10 números y que los muestre
    ordenados según un indicador de criterio de ordenamiento que también debe
    ingresarse por teclado.



     int numeros[10];
     printf("Ingrese 10 numeros\n");

     for(int a=0; a<10; a++){
        fflush(stdin);
        scanf("%d",&numeros[a]);
     }

     printf("Ordenamiento\n");
     bubbleSort(numeros,10);
     mostrarArreglo(numeros,10);
     */

     /* 66- Escribir un programa que ingrese 5 números enteros, los cargue en un arreglo
unidimensional, busque el mayor de ellos, calcule el promedio y muestre:
LOS NÚMEROS INGRESADOS SON : ...................
EL MAYOR DE ELLOS ES: ....................................
SU PROMEDIO ES : ............................................


    int nums[5];
    printf("Ingrese 5 numeros enteros, por favor\n");
    cargaArreglo(nums,5);
    printf("Carga finalizada\n");
    mostrarArreglo(nums,5);
    busquedaMayorMenor(nums,5);
    busquedaProm(nums,5);
    */


    /*68- Escribir un programa que ingrese una cadena, cuente cuántos de sus elementos son dígitos,
cuántos de ellos son blancos y muestre:
LA CANTIDAD DE DÍGITOS QUE APARECEN EN cadena ES cant_digitos Y LA CANTIDAD DE
BLANCOS ES cant_blanco

    char cadena[50];
    int cant_dig, cant_blanc;
    cant_dig=cant_blanc=0;
    printf("Ingrese una cadena por favor\n");
    gets(cadena);
    printf("Su cadena es[%s]\n",cadena);

    for(int x=0; x<strlen(cadena);x++){
        if(isspace(cadena[x])){
            cant_blanc++;
        }
        if(isdigit(cadena[x])){
            cant_dig++;
        }

    }

    printf("Cantidad de digitos = [%d]\n",cant_dig);
    printf("Cantidad de espacios blancos = [%d]\n",cant_blanc);
    */


    /*75- Hacer un programa que ingrese dos cadenas y:
    Determine cuál de ellas es mayor en orden alfabético.
    Concatene ambas cadenas.
    Determine cuál es la cadena más larga.
    Invierta la primera cadena ingresada.


    char cad1[20], cad2[20],cadAux[20];
    printf("Introduce dos cadenas por favor\n");
    fflush(stdin);
    gets(cad1);
    fflush(stdin);
    gets(cad2);

    if(strcmp(cad1,cad2)>0){
        printf("La cadena mayor es: [%s]\n",cad1);
    }
    else {
        printf("La cadena mayor es: [%s]\n",cad2);
    }

    strcpy(cadAux,cad1);


    printf("La concatenacion es: [%s]\n",strcat(cadAux,cad2));

    if(strlen(cad1)>strlen(cad2)){
        printf("La cadena mas larga es [%s]\n",cad1);
    }
    else{
        printf("La cadena mas larga es [%s]\n",cad2);
    }

    printf("La primer cadena invertida es: [%s]\n",strrev(cad1));
     */









}
