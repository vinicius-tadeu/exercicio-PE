#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int s = 0, i;
    
    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            s += i;
        }
    }
    
    printf("A soma de todos os n�meros naturais abaixo de 1000 que s�o m�ltiplos de 3 ou 5 �: %d\n", s);
    
    return 0;
}
