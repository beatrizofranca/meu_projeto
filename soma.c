#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    // Solicita e lê os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Chama a função soma e imprime o resultado
    printf("A soma de %d e %d é: %d\n", a, b, soma(a, b));

    // Chama a função subtração e imprime o resultado
    printf("A subtração de %d e %d é: %d\n", a, b, subtracao(a, b));

    // Chama a função multiplicação e imprime o resultado
    printf("A multiplicação de %d e %d é: %d\n", a, b, multiplicacao(a, b));

    return 0;
}
