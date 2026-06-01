\\Loops com múltiplas variáveis Nesse exemplo, i é incrementado e j é decrementado em cada iteração, permitindo um controle simultâneo de duas variáveis dentro do mesmo loop.
#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}
\\Loops com condições múltiplas Nesse exemplo, o loop continua enquanto i for menor que 5 e j for maior que 5. As duas condições são avaliadas simultaneamente
e o loop só prossegue se ambas forem verdadeiras.
  #include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}
\\Loops com atualizações complexas Nesse exemplo, a variável i é atualizada de maneira diferente dependendo de sua paridade: se i for par, é incrementado por 1; se for ímpar,
é incrementado por 2. Essa lógica de atualização complexa permite que o loop siga um padrão de iteração não trivial.
  #include <stdio.h>
 
int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}
\\Uso de continue e break Nesse exemplo, quando i é 5, continue pula a impressão, e quando i é 8, break termina o loop.
  #include <stdio.h>
 
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }
    return 0;
}
\\ Recursividade procedimento
#include <stdio.h>
 
// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}
 
int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}
\\Nesse exemplo, o procedimento imprimirMensagem é definido com o tipo de retorno void, o que significa que não retorna nenhum valor. 
Esse procedimento pode ser chamado em qualquer parte do programa para imprimir a mesma mensagem, ajudando a evitar repetição de código.
  \\Recursividade
  #include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}
\\ esplicaçao A função recursiveLoop é definida para aceitar um único argumento. Essa função imprime o valor de n e depois chama a si mesma com n - 1.
  A recursividade é controlada por uma condição base if (n > 0). Quando chega a 0, a função para de chamar a si mesma, evitando um loop infinito.
  Se n for maior que 0, a função imprime o valor atual de e faz uma chamada recursiva com n - 1.
  Cada chamada de recursiveLoop reduz o valor de em 1. Isso cria uma série de chamadas que eventualmente atingem o caso-base.
  Quando recursiveLoop(5) é chamado, a sequência de execuções é:

 

recursiveLoop(5) imprime 5 e chama recursiveLoop(4).
recursiveLoop(4) imprime 4 e chama recursiveLoop(3).
recursiveLoop(3) imprime 3 e chama recursiveLoop(2).
recursiveLoop(2) imprime 2 e chama recursiveLoop(1).
recursiveLoop(1) imprime 1 e chama recursiveLoop(0).
recursiveLoop(0) não entra no if e a execução termina.
 

Essa série de chamadas imprime 5 4 3 2 1 na tela.

 

Recursividade é uma técnica essencial para resolver problemas que podem ser divididos em subproblemas menores.
  Nesse exemplo, mostramos como usar recursividade para simular um loop que imprime números em contagem regressiva.
  
