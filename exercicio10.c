#include <stdio.h>

int main() {
	
	// Variaveis
    int numeros[10];
    int soma = 0;
    int i;

    // Lê 10 inteiros do usuário
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcula a soma dos números
    for (i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    // Imprime a média
    printf("A media dos numeros e: %.2f\n", (float)soma / 10);

    return 0;
}

