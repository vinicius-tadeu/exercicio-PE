#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, diferenca, produto1, produto2;
	
	printf("Digite 4 números e descubra a diferença do produto do 1º e 2º com o produto do 3º e 4º.");
	printf("\nA-");
	scanf("%f", &n1);
	printf("B-");
	scanf("%f", &n2);
	printf("C-");
	scanf("%f", &n3);
	printf("D-");
	scanf("%f", &n4);
	
	produto1 = n1 * n2; 
	produto2 = n3 * n4; 
	
	diferenca = produto1 - produto2;
	
	printf("%.2f*%.2f - %.2f*%.2f=", n1, n2, n3, n4);
	printf(" %.2f\n", diferenca);
	system("pause");
}
