#include <stdio.h>

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
    */

    int nums[5];
    printf("Ingrese 5 numeros enteros, por favor\n");
    cargaArreglo(nums,5);
    printf("Carga finalizada\n");
    mostrarArreglo(nums,5);
    busquedaMayorMenor(nums,5);
    busquedaProm(nums,5);




}
