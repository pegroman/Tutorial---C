#include <stdio.h>

int sumar(int n1, int n2){
    return n1 + n2;
}

void mensaje(){
    printf("Hola mundo\n");
}

void cuadrado(int numero){
    numero = numero * numero;
}



int main(){
    //printf("el resultado de la suma es: %d \n", sumar(5,8));
    mensaje();

    int j=5;
    cuadrado(j);// no funciona porque el compilador no sabe en que pos de memoria esta j
    printf("el resultado es: %d\n", j+3); //esperamos en pantalla 28
}

/*
def cuadrado(a):
    a = a * a

j=5
cuadrado(j) ---> j=5*5=25
print(j + 3) # ---> 25+3=28
*/