#include <stdio.h>

/*4. Desenvolva um programa em C que leia a quantidade
de bolo de uma loja de alimentos. Os valores deverão
ser inseridos por meio do teclado. Como saída, 
o programa deve apresentar o número de bolos e seus
sabores (trigo, milho e macaxeira). e o total*/

int main (){
	
	int v1, v2, v3;
	
	printf("Bom dia\n\n");
	
	printf("Quantos bolos de trigo ah na loja?\n\n");
	scanf("%d", &v1);
	
	printf("\nQuantos bolos de milho ah na loja?\n\n");
	scanf("%d", &v2);
	
	printf("\nQuantos bolos de macaxeira ah na loja?\n\n");
	scanf("%d", &v3);
	
	printf("\nde trigo ah, na loja, %d\n", v1 );
	printf("de milho, na loja ah %d\n" , v2);
	printf("de macaxeira, na loja ah %d\n", v3 );
	
}