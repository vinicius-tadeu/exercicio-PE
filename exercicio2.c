#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	// Permitir acentos
	setlocale(LC_ALL, "Portuguese");
	
	float x, y, x2, y2, distancia;
	
	printf("Informe a posição de cada ponto no plano.");
	printf("\nPonto 1\nX-");
	scanf("%f", &x);
	printf("Y-");
	scanf("%f", &y);
	printf("Ponto 2\nX-");
	scanf("%f", &x);
	printf("Y-");
	scanf("%f", &y2);
	
	distancia= sqrt(pow(x2-x,2)+pow(y2-y,2));
	
	printf("Distancia entre os pontos 1 e 2 = %.4f\n", distancia);
	
	system("pause");
}
