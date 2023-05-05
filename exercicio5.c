#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int n, i;
    
    // lê o número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &n);
    
    // verifica e exibe todos os divisores do número
    printf("Divisores de %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}

