#include <stdio.h>

int main() {
	
	// Variaveis
    int numeros[10];
    int soma = 0;
    int i;

    // L� 10 inteiros do usu�rio
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcula a soma dos n�meros
    for (i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    // Imprime a m�dia
    printf("A media dos numeros e: %.2f\n", (float)soma / 10);

    return 0;
}

