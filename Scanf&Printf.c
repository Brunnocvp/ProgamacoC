#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe scanf
    // scanf("formato1" "formato2, &variavel1, variavel2, ...);

    printf("digite a sua idade:"); 
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("digite a ua altura: ");
    scanf("%f", &altura);
    printf("A altura é %f\n", altura);
    
    printf("digite o seu nome: ");
    scanf(" %c", &opcao);
    printf("O nome é: %c", opcao);
}
