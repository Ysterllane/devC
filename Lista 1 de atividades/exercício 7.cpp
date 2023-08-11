#include<iostream>
using namespace std;

int main()
{
    int b, h, a;
    printf("Qual a base do retangulo? ");
    scanf("%d", &b);
    
    printf("\nQual a altura do retngulo? ");
    scanf("%d", &h);
    
    a=(b*h)/2;
    
    printf("\nSua area eh: %d ", a);
    
    return 0;
}