#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    // Solicita os números ao usuário
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calcula a média
    media = (num1 + num2 + num3) / 3.0;

    // Exibe o resultado com uma casa decimal
    printf("A media e %.1f.\n", media);

    return 0;
}