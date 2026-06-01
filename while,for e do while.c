while (condição) {
    // bloco de código a ser executado repetidamente
}
#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}
\\Um dos erros comuns ao usar o while é criar um loop infinito, em que a condição nunca se torna falsa. exemplo
  #include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        // O valor de 'i' nunca é incrementado
    }
   
    return 0;
  \\Nesse caso, a variável i nunca é incrementada dentro do loop. Então, a condição i <= 5 será sempre verdadeira.
}
\\Utilização de loops while para leitura de dados
\\Importante: antes de você executar o código é necessário que sejam inseridos os valores a serem lidos no campo input, um número por linha
, e o último número deve ser negativo para que o loop seja interrompido
#include <stdio.h>
 
int main() {
    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}
\\Do-while
  \\A sintaxe básica do do-while é bastante simples. Consiste na palavra-chave do, seguida por um bloco de código entre chaves e
  , em seguida, a palavra-chave while com a condição entre parênteses. Isso é escrito da seguinte forma:
do {
    // bloco de código a ser executado
} while (condição);

\\Exemplo básico de um loop do-while
  #include <stdio.h>
 
int main() {
    int i = 1;
   
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
   
    return 0;
}
\\Vantagens Nesse caso, o loop do-while assegura que o pedido de entrada seja feito pelo menos uma vez, independentemente do valor inicial de num
  . Após cada entrada, a condição num >= 0 é verificada. Se for verdadeira, o loop continua; se for falsa, o loop termina. 
#include <stdio.h>
 
int main() {
    int num;
   
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0);
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}
\\ utilizzaçao Importante: lembre-se de inserir os dados de entrada no campo input, um número por linha, e a última opção deve ser o número 3 para sair do programa.
#include <stdio.h>
 
int main() {
    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3);
   
    return 0;
}
\\For
for (inicialização; condição; incremento) {
    // bloco de código a ser executado repetidamente
}
  \\exemplo Nesse caso, a variável i é inicializada com 1. A condição i <= 5 é verificada antes de cada iteração. Se a condição for verdadeira, o bloco de código que imprime i é executado.
  Após a execução do bloco, a variável i é incrementada em 1. O loop continua até que a condição se torne falsa.
#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}
\\Iteração com condicionais Nesse caso, a condição if (i % 2 == 0) verifica se i é par. Se for, o valor de i é impresso.
  #include <stdio.h>
 
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}
\\Uso de for com incrementos e decrementos diferentes Nesse caso, a variável i é incrementada em 10 a cada iteração, permitindo imprimir múltiplos de 10 de 0 a 100.
#include <stdio.h>
 
int main() {
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }
   
    return 0;
}
\\decremento
#include <stdio.h>
 
int main() {
    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
   
    return 0;
}
