#include<stdio.h>
#include<locale.h>
#include<math.h>
#define PI 3.14159

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r, v, a;
	
	printf("Descubra a área e o volume de uma esfera (em centímetros).\n\nInforme o raio da esfera:");
	scanf("%f", &r);
	
	a = 4.0*PI* pow(r,2);
	v = 4.0/3*PI* pow(r,3);
	
	printf("Área = %.4f\nVolume = %.4f\n", a, v);
	
	system("pause");
	
}
