#include <stdio.h>

int sumar_valores(int n1, int n2); //suma dos valores

int main(){
    int suma = 0;

    suma = sumar_valores(3,5);

    printf("la suma es: %d \n", suma);
}

int sumar_valores(int n1, int n2){
    return n1 + n2;
}
