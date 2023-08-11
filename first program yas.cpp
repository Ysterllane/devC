#include <stdio.h> // biblioteca

int main(){

	int nome;
	//criação de variaveis inteiras

	printf("Qual seu nome?\n");

	scanf("%c", & nome);
	//seta para indicar a variavel &
	//%d é a representação do char
	//scanf: armazenar o valor da variavel - leia

	printf("Seu nome eh:\n%c", nome);

	return 0;
}
