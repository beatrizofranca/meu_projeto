#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("A soma de %d e %d é: %d\n", a, b, soma(a, b));
    printf("A multiplicação de %d e %d é: %d\n", a, b, multiplicacao(a, b));

    return 0;
}
