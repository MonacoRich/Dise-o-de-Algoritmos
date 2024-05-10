#include <stdio.h>

int main() {
    int dia, mes;

    // Solicitar la fecha de nacimiento al usuario
    printf("Ingrese su fecha de nacimiento (formato dd mm): ");
    scanf("%d %d", &dia, &mes);

    // Determinar el signo zodiacal
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("Tu signo zodiacal es Aries.\n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("Tu signo zodiacal es Tauro.\n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Tu signo zodiacal es Geminis.\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("Tu signo zodiacal es Cancer.\n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("Tu signo zodiacal es Leo.\n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Tu signo zodiacal es Virgo.\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Tu signo zodiacal es Libra.\n");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Tu signo zodiacal es Escorpio.\n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Tu signo zodiacal es Sagitario.\n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("Tu signo zodiacal es Capricornio.\n");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("Tu signo zodiacal es Acuario.\n");
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        printf("Tu signo zodiacal es Piscis.\n");
    } else {
        printf("Fecha invalida.\n");
    }

    return 0;
}
