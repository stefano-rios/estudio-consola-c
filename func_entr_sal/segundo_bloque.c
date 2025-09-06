#include <stdio.h>

/*23 x de tipo caracter e y
de tipo entera, separadas por una / (barra)

void main(){
    char x;
    int y;
    printf("Ingrese dos variables separadas por una barra\nLa primera char y la segunda entera\n");
    scanf("%c/%d",&x,&y);
    printf("Sus variables son: %c y %d",x,y);
}
*/

/*25- Escribir un programa que
ingrese un carácter y muestre en pantalla el número
decimal que le corresponde en la tabla ASCII.

void main(){
    char c;
    printf("Ingrese un caracter y se lo mostraremos en ASCII\n");
    scanf("%c",&c);
    printf("Su caracter era el %c y en ASCII tiene un valor de %d",c,c);
}
*/

/*28- Escribir un programa que ingrese un entero
y muestre en forma tabulada el número, su
cuadrado y su cubo.

void main(){
    int ent,cuad,cub;
    printf("Ingrese un entero, por favor\n");
    scanf("%d",&ent);

    cuad = ent*ent;
    cub = cuad*ent;

    printf("Su numero es: %d, el cuadrado es: %d, y su cubo es: %d\n",ent,cuad,cub);
}
*/

/*30- Escribe un programa que borre
la pantalla y escriba en la primera línea su nombre y en la
segunda su apellido:

void main(){
    char nom[15];
    char ape[15];
    printf("Ingrese su nombre y apellido seguidos de un enter\n");
    fflush(stdin);
    gets(nom);
    fflush(stdin);
    gets(ape);
    printf("Toque una tecla para limpiar pantalla...");
    fflush(stdin);
    getche();
    system("cls");
    printf("Su nombre es %s y su apellido es %s\n",nom,ape);

}
*/














