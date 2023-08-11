#include <stdio.h>

/* 2. Desenvolva um programa em C que pergunta um valor em metros 
e imprime o correspondente em decímetros, centímetros e milímetros
*/

int main (){
	
	int m, dm, cm, mm;
	
	printf("Quantos metros quadrados tem seu quarto, aproximadamente? (sem numeros decimais) ");
	scanf("%d",&m);
	
	dm=m*10;
	cm=m*100;
	mm=m*1000;
	
	printf("\nSeu quarto em decimetros eh: %d\n\n", dm);
	
	printf("Seu quarto em centimetros eh: %d\n\n", cm);
	
	printf("Seu quarto em milimetros eh:%d\n\n", mm);
	
	return 0;
}