#include <stdio.h>

int main (){
	
	char numero =3;
	
	//comparação
	if(numero >= 7){
		printf("aprovado");}
	
	//se a comparação for falsa
	else if((numero < 7)&&(numero>=4)){ // || ou uma ou outra
		printf("final");}
	
	//se a anterior for falsa tbm
	else{ printf("reprovado");}
	
	return 0;
}
