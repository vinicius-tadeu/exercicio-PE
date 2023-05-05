#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, y;
	
	printf("Informe o X e o Y do ponto no plano cartesiano.\nX:");
	scanf("%f", &x);
	printf("Y:");
	scanf("%f", &y);

	if (x>0 && y>0){
		printf("O ponto pertence ao quadrande Q1.");
		}
	else if (x<0 && y>0){
		printf("O ponto pertence ao quadrande Q2.");
		}
	else if (x<0 && y<0){
		printf("O ponto pertence ao quadrande Q3.");
		}
	else if (x>0 && y<0){
		printf("O ponto pertence ao quadrande Q4.");
		}
	else if (x==0 && y==0){
		printf("O ponto pertence a Origem (0,0).");
		}
	else if (x==0){
		printf("O ponto pertence ao Eixo y");
		}
	else if (y==0){
		printf("O ponto pertence ao Eixo x");
		}
		else {
		("Digite um número inteiro\n");
	}
		system("pause");
}

