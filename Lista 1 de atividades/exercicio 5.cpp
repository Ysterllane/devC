#include <stdio.h>

/*5. Desenvolva um programa em C que lê dois valores
e imprime qual o maior valor.*/

int main (){
	
	int valor1, valor2;
	
	printf("Diga um valor:");
	scanf("%d", &valor1);
	
	printf("Diga um outro valor:");
	scanf("%d", &valor2);
	
	if(valor1>valor2){
	printf("O valor maior eh:%d", valor1);
}
	
	else{
	printf("O valor maior eh:%d ", valor2);
}
	
	return 0;
}
