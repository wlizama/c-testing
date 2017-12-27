#include <stdio.h>

// Contanstes
#define maxValue 150
#define minValue -3179

void main(){

	int option;
	printf("#################################################\n");
	printf("# Menú de opciones      #########################\n");
	printf("# [1] Evaluar un número #########################\n");
	printf("# [2] Par o impar       #########################\n");
	printf("\n");
	
	printf("# Escriba su opción: ");
	scanf("%i", &option);

	int intNumber;

	switch(option){
		case 1:
			printf("# [1] Evaluar un número - Número debe ser mayor a %i y menor a %i #\n", minValue, maxValue);
			printf("\n");

			printf("# - Ingresar numero a evaluar:");
			scanf("%i", &intNumber);

			if (intNumber > maxValue)
				printf("#> El número %i excede el valor máximo.\n", intNumber);
			else if(intNumber < minValue)
				printf("#> El número %i debe ser mayor al valor minimo\n", intNumber);
			else
				printf("#> El número %i esta dentro del rango permitido\n", intNumber);	

			break;
		case 2: 
			printf("# [2] Par o impar - evaluar si número ingresado es par o impar");
			printf("\n");

			printf("# - Ingresar número a evaluar:");
			scanf("%i", &intNumber);

			if ((intNumber % 2) == 0 )
				printf("#> El número %i es PAR\n", intNumber);	
			else
				printf("#> El número %i es IMPAR\n", intNumber);	

			break;
		default:
			printf("#> default value\n");
			break;
	}
}