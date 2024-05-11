#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres números
    printf("Ingrese tres números (mayores de 3 y menores de 15): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Verificar si los números ingresados están dentro del rango permitido
    if ((num1 >= 3 && num1 <= 15) && (num2 >= 3 && num2 <= 15) && (num3 >= 3 && num3 <= 15)) {
        // Ordenar los números de mayor a menor
        int mayor, medio, menor;
        if (num1 >= num2 && num1 >= num3) {
            mayor = num1;
            if (num2 >= num3) {
                medio = num2;
                menor = num3;
            } else {
                medio = num3;
                menor = num2;
            }
        } else if (num2 >= num1 && num2 >= num3) {
            mayor = num2;
            if (num1 >= num3) {
                medio = num1;
                menor = num3;
            } else {
                medio = num3;
                menor = num1;
            }
        } else {
            mayor = num3;
            if (num1 >= num2) {
                medio = num1;
                menor = num2;
            } else {
                medio = num2;
                menor = num1;
            }
        }

        // Mostrar los números ordenados de mayor a menor
        printf("Los números ordenados de mayor a menor son: %d, %d, %d\n", mayor, medio, menor);
    } else {
        // Mostrar un mensaje de error si los números están fuera del rango permitido
        printf("Error: Al menos uno de los números está fuera del rango permitido.\n");
    }

    return 0;
}
