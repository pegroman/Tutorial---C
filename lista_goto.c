#include <stdio.h>


int main(){
	//recorrer una lista de 10 elemento

	int contador = 10;
	int lista[10] = {1,2,3,5,6,9,4,10,5,6};	
	imprimir:
	printf("%d \n", lista[contador - 1]);
	contador = contador - 1;
	if(contador == 0){
		printf("fin \n");
	}
	else{
		goto imprimir;
	}
}
