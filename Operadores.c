#include <stdio.h>

void main(){
	int x = 2;
	int y = 5;
	int sumSimple = x + y;
	int operacionPrioridad = 3 * (x + y) - (5 + x);

	int comparacion = x > y;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("Suma Simple: %d\n", sumSimple);
	printf("Operacion con Prioridad: %d\n", operacionPrioridad);
	printf("Comparcion x > y: %d\n", comparacion);
}