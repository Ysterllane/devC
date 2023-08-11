#include <stdio.h>

/*8. Desenvolva um programa em c que leia a 
quantidade de alunas e a de alunos e diga se na
turma há mais meninos sou meninas*/

int main (){
	
	int alunos, alunas;
	
	printf("Sobre a sua turma,\n");
	
	printf("Diga a quantidade de meninos:");
	scanf("%d", & alunos);
	
	printf("Diga a quantidade de meninas:");
	scanf("%d", & alunas);
	
    if(alunos > alunas){
     printf("Ah mais meninos");		
		}
    else if(alunas > alunos){
     printf("Ah mais meninas");
        }
    else{
     printf("A quantidade de meninos e meninas é igual");
        }   
    
	return 0;
	
}