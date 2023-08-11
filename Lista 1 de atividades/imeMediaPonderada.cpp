#include<stdio.h>

int main(){

    float notaDeMatematica, pesoDeMatematica, notaDeFisica, pesoDeFisica, notaDeQuimica, pesoDeQuimica, mediaPonderada;
   
    printf("Ei, agora vc eh um estudante que fez um concurso do IME, e agora vc vai me dizer sua nota de Matematica;\n\n");
    scanf("%f", &notaDeMatematica);
    
    printf("\nQual o peso pra essa nota?\n\n");
    scanf("%f", &pesoDeMatematica);
    
    printf("\nCerto, agora me diz sua nota de Fisica:\n\n");
    scanf("%f", &notaDeFisica);
    
    printf("\nQual o peso pra essa nota?\n\n");
    scanf("%f", &pesoDeFisica);
    
    printf("\nAgora so tah faltando sua nota de Quimica, qual foi?\n\n");
    scanf("%f", &notaDeQuimica);
    
    printf("\nQual o peso pra essa nota?\n\n");
    scanf("%f", &pesoDeQuimica);
    
    mediaPonderada = (notaDeMatematica*pesoDeMatematica + notaDeFisica*pesoDeFisica + notaDeQuimica*pesoDeQuimica)/(pesoDeMatematica + pesoDeQuimica + pesoDeFisica);
    printf("\nAgora eu vou te falar o valor da sua nota por meio de um calculo chamado media ponderada:%2.f\n\n",mediaPonderada);
    
    return 0;
}
