#include <stdio.h>

void main(){
	char entradaCaracter;
	int entradaInt;
	float entradaDecimal;

	printf("\n:::INPUT:::\n");

	printf("Ingresar caracter: ");
	scanf("%c", &entradaCaracter);

	printf("Ingresar Número entero: ");
	scanf("%i", &entradaInt);

	printf("Ingresar Número decimal: ");
	scanf("%f", &entradaDecimal);

	printf("\n:::OUTPUT:::\n");
	printf("El caracter ingresado es: %c\n", entradaCaracter);
	printf("El número entero ingresado es: %i\n", entradaInt);
	printf("El número decimal ingresado es: %2.3f\n", entradaDecimal);
}