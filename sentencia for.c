#include <stdio.h>

int main() {
    int n, suma = 0;
    int i;
    // Solicitar al usuario ingresar el número n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("El número ingresado no es válido. Debe ser un entero positivo.\n");
        return 1;
    }
    
    // Calcular la suma de los primeros n números pares
    for ( i = 1; i <= n; i++) {
    
	   suma += 2 * i; // Cada número par es el doble del índice
        printf("Para n = %d, Suma = %d.\n", i, suma);
    }
    
    return 0;
}