#include <stdio.h>

int main(){
	int contador = 10;
	
	imprimir:
	printf("Hola mundo \n");
	contador = contador - 1;
	if(contador == 0){
		printf("fin \n");
	}
	else{
		goto imprimir;
	}
}
