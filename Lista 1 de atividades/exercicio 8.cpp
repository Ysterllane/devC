#include <stdio.h>

/*8. Desenvolva um programa em c para comparar a 
idade de Pedro e a de Joana e informar qual é o 
mais velho*/

int main (){
	
	int j, p;
	
	printf("Diga a idade de Joana:");
	scanf("%d", & j);
	
	printf("Diga a idade de Pedro:");
	scanf("%d", & p);
	
    if(j>p){
     printf("A mais velha eh Joana ");		
		}
    else {
     printf("O mais velho eh Pedro ");
        }
	
	return 0;
	
}