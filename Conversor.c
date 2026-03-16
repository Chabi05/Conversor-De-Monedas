#include <stdio.h>

void convertirQuetzales();
void convertirDolares();
void convertirEuros();

int main() {
    int opcion;

    printf("Aplicación de conversor de monedas\n");
    printf("1. Convertir de Quetzales (GTQ) a Dolares (USD) o Euros (EUR)\n");
    printf("2. Convertir de Dolares (USD) a Quetzales (GTQ) o Euros (EUR)\n");
    printf("3. Convertir de Euros (EUR) a Quetzales (GTQ) o Dolares (USD)\n");
    printf("4. Salir\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            convertirQuetzales();
            break;
        case 2:
            convertirDolares();
            break;
        case 3:
            convertirEuros();
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}

void convertirQuetzales() {
    int opcion;
    float cantidad, resultado;

    printf("Convertir Quetzales (GTQ)\n");
    printf("1. GTQ a USD\n");
    printf("2. GTQ a EUR\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad en Quetzales: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad / 7.75;  // Tasa de cambio aproximada (1 USD = 7.75 GTQ)
            printf("%.2f GTQ = %.2f USD\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / 8.5;  // Tasa de cambio aproximada (1 EUR = 8.5 GTQ)
            printf("%.2f GTQ = %.2f EUR\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

void convertirDolares() {
    int opcion;
    float cantidad, resultado;

    printf("Convertir Dolares (USD)\n");
    printf("1. USD a GTQ\n");
    printf("2. USD a EUR\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad en Dolares: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * 7.75;  // Tasa de cambio aproximada (1 USD = 7.75 GTQ)
            printf("%.2f USD = %.2f GTQ\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * 0.85;  // Tasa de cambio aproximada (1 USD = 0.85 EUR)
            printf("%.2f USD = %.2f EUR\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

void convertirEuros() {
    int opcion;
    float cantidad, resultado;

    printf("Convertir Euros (EUR)\n");
    printf("1. EUR a GTQ\n");
    printf("2. EUR a USD\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad en Euros: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * 8.5;  // Tasa de cambio aproximada (1 EUR = 8.5 GTQ)
            printf("%.2f EUR = %.2f GTQ\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * 1.18;  // Tasa de cambio aproximada (1 EUR = 1.18 USD)
            printf("%.2f EUR = %.2f USD\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}