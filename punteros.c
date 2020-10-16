#include <stdio.h>

void cuadrado(int *numero){
    *numero = *numero * *numero;
}

int main(){
    /*int *ptr; //declaro un puntero
    int dato=30; //declaro una variable de tipo entero con el valor 30

    ptr = &dato;

    printf("la posicion de memoria de dato es: %d \n", &dato);
    printf("El valor del contenido de la posicion de memoria es: %d\n", *ptr);

    *ptr = 50;
    printf("El valor del contenido de la posicion de memoria es: %d\n", *ptr);*/

    int j = 5;
	cuadrado(&j);
	printf("El resultado es: %d\n",j+3); //28
}