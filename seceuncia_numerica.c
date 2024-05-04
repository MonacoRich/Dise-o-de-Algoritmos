#include <stdio.h>

int main() {
    int n;
    int i; // Declaración de la variable de control del bucle fuera del bucle

    // Solicitar al usuario el número de términos de la secuencia
    printf("Ingrese el número de términos de la secuencia que desea generar: ");

    // Leer el número de términos de la secuencia ingresado por el usuario
    scanf("%d", &n);

    // Imprimir un mensaje indicando que se va a generar la secuencia
    printf("La secuencia generada es:\n");

    // Bucle para generar la secuencia y mostrarla en la consola
    for (i = 1; i <= n; i++) {
        // Calcular el valor de cada término de la secuencia utilizando la fórmula dada
        int valor = i * (i + 1) * (2 * i + 1) / 6;

        // Imprimir el valor del término actual de la secuencia
        printf("%d ", valor);
    }

    // Imprimir un salto de línea para separar la secuencia del resto de la salida
    printf("\n");

    return 0; // Indicar que el programa finalizó correctamente
}
