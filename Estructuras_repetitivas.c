#include <stdio.h>
#include <string.h>

void main(){

	int ciclo;
	printf("# Que ciclo vas a probar? ########\n");
	printf("[1] while\n");
	printf("[2] do ... while\n");
	printf("[3] for\n");
	printf("Escriba su respuesta: ");
	scanf("%i", &ciclo);

	int cont = 0;

	if (ciclo == 1){
		int numTope = 0;
		int factorial = 1;

		printf("# Factorial con ciclo while ########\n");
		printf("De que número desea calcular el factorial? ");
		scanf("%i", &numTope);
		while(cont != numTope){
			cont++;
			factorial = factorial * cont;
		}
		printf("%i! = %i \n", numTope, factorial);
	}
	else if (ciclo == 2){

		int sumar, sumaTotal = 0;
		printf("# Sumatoria con do ... while ########\n");
		printf("# Presiona 0 para terminar\n");
		do{
			printf("Sumar: ");
			scanf("%i", &sumar);

			sumaTotal = sumaTotal + sumar;

		} while (sumar != 0);
		printf("Contador Finalizó en: %i\n", sumaTotal);
	}
	else if (ciclo == 3){

		int numeroTabla, hasta = 12;

		printf("Tabla de multiplicar #");
		scanf("%i", &numeroTabla);

		for (int i = 0; i < hasta; ++i){

			int mult = numeroTabla * (i +1);

			printf("%i * %i = %i\n", numeroTabla, (i+1), mult);
		}
	}
}