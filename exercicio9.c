#include <stdio.h>
#include<locale.h>

int main() {
	// Definindo acentos
	setlocale(LC_ALL, "Portuguese");
    int opcao, qtd;
    float valor, total = 0;
    printf("Bem-vindo � loja de frutas!\n");
    do {
        printf("\nMenu de Frutas:\n");
        printf("1 - Ma�� (R$ 1.00)\n");
        printf("2 - PERA (R$ 4.00)\n");
        printf("3 - ABACAXI (R$ 5.00)\n");
        printf("4 - Lim�o (R$ 1.00)\n");
        printf("5 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                valor = 2.00;
                printf("Voc� escolheu Ma��. Pre�o: R$ %.2f\n", valor);
                break;
            case 2:
                valor = 1.50;
                printf("Voc� escolheu Banana. Pre�o: R$ %.2f\n", valor);
                break;
            case 3:
                valor = 3.00;
                printf("Voc� escolheu Laranja. Pre�o: R$ %.2f\n", valor);
                break;
            case 4:
                valor = 1.00;
                printf("Voc� escolheu Lim�o. Pre�o: R$ %.2f\n", valor);
                break;
            case 5:
                printf("Encerrando a compra...\n");
                break;
            default:
                printf("Op��o inv�lida.\n");
                break;
        }
        if(opcao >= 1 && opcao <= 4) {
            printf("Digite a quantidade desejada: ");
            scanf("%d", &qtd);
            total += valor * qtd;
            printf("Valor parcial: R$ %.2f\n", valor * qtd);
        }
    } while(opcao != 5);
    printf("Total da compra: R$ %.2f\n", total);
    printf("Obrigado por comprar conosco!\n");
    return 0;
}

