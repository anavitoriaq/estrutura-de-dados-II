#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero %d é PAR.\n", n);
    } else {
        printf("O numero %d é ÍMPAR.\n", n);
    }

    return 0;
}