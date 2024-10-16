#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, proximo = 0;

    if (num == 0 || num == 1) {
        return 1; 
    }

    while (proximo < num) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    if (proximo == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    printf("Número: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
