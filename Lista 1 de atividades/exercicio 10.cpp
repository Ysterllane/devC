#include <stdio.h>

/*10. Desenvolva um programa em c que solicite ao 
usuário dois números inteiros diferentes de zero. 
Com esses números imprima na tela: a soma, a 
subtração,o produto, a divisão e a média */

int main (){
	
	float n1, n2, soma, subtracao;
	float multiplicacao, divisao, media;

	printf("Diga um numero diferente de zero: ");
	scanf("%f", & n1);
	
	printf("Diga outro numero diferente de zero: ");
	scanf("%f", & n2);
	
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    media = (n1 + n2) / 2;

    printf("Sua soma eh %.2f\n" , soma);

    printf("Sua subtracao eh %.2f\n" , subtracao);

    printf("Sua multiplicacao eh %.2f\n" , multiplicacao);
	
    printf("Sua divisao eh %.2f\n" , divisao);

    printf("Sua media eh %.2f" , media);
	
    return 0;
	
}