#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, diferenca, produto1, produto2;
	
	printf("Digite 4 n�meros e descubra a diferen�a do produto do 1� e 2� com o produto do 3� e 4�.");
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
