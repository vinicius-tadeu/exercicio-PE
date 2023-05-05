#include <stdio.h>
#include<locale.h>

int main() {
	// Definindo Acentos
	setlocale(LC_ALL, "Portuguese");
    int n, maior, menor;
    
    printf("Digite um numero inteiro (negativo para parar): ");
    scanf("%d", &n);
    
    maior = menor = n; // atribui o primeiro valor digitado como maior e menor
    
    while (n >= 0) { // enquanto o número digitado não for negativo
        if (n > maior) {
            maior = n;
        }
        
        if (n < menor) {
            menor = n;
        }
        
        printf("Digite outro numero inteiro (negativo para parar): ");
        scanf("%d", &n);
    }
    
    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);
    
    return 0;
}

