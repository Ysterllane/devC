#include <stdio.h>

/*6. Desenvolva um programa em C que lê quatro valores
e imprime qual o maior valo*/

int main (){
	
	int valor1, valor2, valor3, valor4;
	
	printf("Diga um valor:");
	scanf("%d", & valor1);
	
	printf("Diga um outro valor:");
	scanf("%d", & valor2);
	
	printf("Diga um outro valor:");
	scanf("%d", & valor3);
	
	printf("Diga um outro valor:");
	scanf("%d", & valor4);
	
if((valor1> valor2)&&(valor1> valor3)&&(valor1> valor4)){
printf("O valor maior eh: %d", valor1);		
		}
else if((valor2 > valor1)&&(valor2> valor3)&&(valor2> valor4)){
printf("O valor maior eh: %d", valor2);
}
else if((valor3> valor2)&&(valor3> valor1)&&(valor3> valor4)){
printf("O valor maior eh: %d", valor3);
}
else if((valor4> valor2)&&(valor4> valor3)&&(valor4> valor1)){
printf("O valor maior eh: %d", valor4);

	}
	
	
	return 0;
	
	
}