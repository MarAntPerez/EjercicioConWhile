#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TOPE_MAXIMO= 100;
	
	int numero = 0;
	
	printf("%i", numero++);//0 1
	printf("\n%i", --numero);//0 0
	printf("\n%i", numero++);//0 1
	printf("\n%i", --numero);//0 0
	printf("\n%i", numero++);//0 1
	printf("\n%i", --numero);//0 0
	
	while(numero<TOPE_MAXIMO){
		printf("\n%i", ++numero);// numero = numero +1;
	
	}
	
	printf("\nEste es el numero final: %i", numero);
	
	system("pause");
	
	while(numero>0){
		printf("\n%i", numero--);
	}
	
	printf("")
	
	return 0;
}
