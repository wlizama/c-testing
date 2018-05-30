#include <stdio.h>

#define TAM 10

void Burbuja(int array[]){
    int i, j, temp;

    for(i = 0; i < TAM - 1; i++){
        for(j = 0; j < TAM - 1; j++)
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
    }
}

void EntradaArreglo(int array[]){
    int i;
    
    for(i = 0; i < TAM; i++){
        printf("Elemento[%d]= ", i);
        scanf("%d",&array[i]);
    }
}

void ImprimeArreglo(int array[]){
    int i;
    
    for (i = 0; i < TAM; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int arreglo[TAM];

    printf("Ingresa los %i números a ordenar: \n", TAM);
    EntradaArreglo(arreglo);

    printf("\nArreglo Original:\n");
    ImprimeArreglo(arreglo);

    Burbuja(arreglo);

    printf("\nArreglo Ordenado:\n");
    ImprimeArreglo(arreglo);

    return 0;
}

/***************************************
    Ingresa los 10 números a ordenar: 
    Elemento[0]= 54
    Elemento[1]= 78
    Elemento[2]= 8
    Elemento[3]= 6
    Elemento[4]= 7
    Elemento[5]= 32
    Elemento[6]= 4
    Elemento[7]= 3
    Elemento[8]= 98
    Elemento[9]= 28

    Arreglo Original:
    54 78 8 6 7 32 4 3 98 28 

    Arreglo Ordenado:
    3 4 6 7 8 28 32 54 78 98 
*******************************************/