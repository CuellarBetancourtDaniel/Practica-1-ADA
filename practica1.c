#include <stdio.h>

int quitarduplicados(int nums[], int tamano) {
    if (tamano == 0) return 0;  // Si el arreglo está vacío, retornamos 0

    int i = 0;  // i la posición de los elementos únicos

    // Con  j recorremos todo el arreglo
    for (int j = 1; j < tamano; j++) {
        if (nums[j] != nums[i]) {
            i++;  // Avanzamos   i
            nums[i] = nums[j];  // Actualizamos el valor en la nueva posición única
        }
    }

    // El número de elementos únicos es i + 1, ya que i es un índice.
    return i + 1;
}

int main() {
    int tamano;
    printf("Digita el tamano de tu arreglo: ");
    scanf("%d", &tamano);

    int nums[tamano];  

    // Solicitamos los números del arreglo
    printf("Digita %d numeros:\n", tamano);
    for (int i = 0; i < tamano; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &nums[i]);  
    }
    // Llamamos a la función quitarduplicados
    int k1 = quitarduplicados(nums, tamano);
    // Imprimimos el número de elementos únicos y el arreglo modificado
    printf("Numero de elementos unicos (k1): %d\n", k1);
    printf("Arreglo modificado: ");
    for (int i = 0; i < k1; i++) {
        printf("%d ", nums[i]);
    }
 

    return 0;
}
