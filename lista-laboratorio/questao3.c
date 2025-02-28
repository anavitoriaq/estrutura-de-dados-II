#include <stdio.h>

int main() {
    int v[] = {1, 7, 3, 9, 2, 8, 10, 4};  
    int tam = sizeof(v) / sizeof(v[0]);  
    int num, i;
    int indice = -1;  

    printf("Digite o número a ser buscado: ");
    scanf("%d", &num);

    for(i = 0; i < tam; i++) {
        if(v[i] == num) {
            indice = i;  
            break;  
        }
    }

    if(indice != -1) {
        printf("O número %d foi encontrado no índice %d.\n", num, indice);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", num);
    }

    return 0;
}