#include <stdio.h>
#include<locale.h>

int main() {
	// Definindo acentos
	setlocale(LC_ALL, "Portuguese");
	
    int i, n, termo_atual = 0, termo_anterior = 0, termo_anterior_anterior = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci e: 0\n");
        return 0;
    }
    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            termo_atual = 0;
        } else if (i == 2) {
            termo_atual = 1;
            termo_anterior = 0;
        } else {
            termo_anterior_anterior = termo_anterior;
            termo_anterior = termo_atual;
            termo_atual = termo_anterior_anterior + termo_anterior;
        }
    }
    
    printf("O enesimo termo da sequencia de Fibonacci e: %d\n", termo_atual);
    
    return 0;
}
