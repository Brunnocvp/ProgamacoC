Lógico (&&)
Descrição: o operador && retorna verdadeiro se e somente se ambas as expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso
if (a > 0 && b > 0) {
  printf("Ambos são positivos.\n");
}
\\
Lógico (II)
Descrição: o operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.
  if (a > 0 || b > 0) {
  printf("Pelo menos um é positivo.\n");
}
\\
NÃO Lógico (!)
Descrição: o operador ! inverte o valor lógico de uma expressão. Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.
if (!a) {
  printf("a é zero.\n");
}
\\
Operador AND Lógico (&&)
Para compreender o funcionamento do operador AND lógico (&&), observe!
A	B	A && B
1	1	1
1	0	0
0	1	0
0	0	0
\\
Operador OR Lógico (||)
Para entender como o operador OR lógico (||) opera, veja a tabela a seguir.
A	B	A || B
1	1	1
1	0	1
0	1	1
0	0	0
Operador NOT Lógico (!)
Para conhecer o comportamento do operador NOT lógico (!), confira a próxima tabela.
A	!A
true	false
false	true
\\
Operador AND lógico (&&)
Esse operador é utilizado quando queremos que todas as condições sejam verdadeiras para que a expressão inteira seja verdadeira
#include <stdio.h>
int main() {
  int a = 5;
  int b = 10;
  if (a > 0 && b > 0) {
    printf("Ambos os números são positivos\n");
  }
  return 0;
}
Operador OR lógico (||)
Esse operador é utilizado quando queremos que pelo menos uma das condições seja verdadeira para que a expressão inteira seja verdadeira.
#include <stdio.h>
int main() {
  int a = 5;
  int b = -10;
 if (a > 0 || b > 0) {
    printf("Pelo menos um dos números é positivo\n");
  }
return 0;
}
Operador NOT lógico (!)
Esse operador é utilizado para inverter o valor lógico de uma condição. Se a condição for verdadeira, ela se torna falsa, e vice-versa.
#include <stdio.h>

int main() {
  int a = -5;
  if (!(a > 0)) {
    printf("a não é um número positivo\n");
  }
  return 0;
}
Precedência de operadores
Determina a ordem em que as operações são realizadas. Em C, a precedência dos operadores lógicos é importante para garantir que as condições sejam avaliadas corretamente.
Os operadores de maior precedência serão avaliados primeiro, depois vão sendo avaliados os de menor precedência.
Na tabela a seguir, estão listados todos os operadores C em ordem decrescente de prioridade, com a sua associatividade.
Operadores	Associatividade
() []	esquerda para a direita
! - ++ --	direita para a esquerda
* / %	esquerda para a direita
+ -	esquerda para a direita
< <= > >=	esquerda para a direita
== !=	esquerda para a direita
&&	esquerda para a direita
||	esquerda para a direita
= += -= *= /= %=	direita para a esquerda
,	esquerda para a direita
Tabela: Representação da regra de precedência entre operadores.
Sérgio dos Santos Cardoso Silva.
Assim, a expressão a<10 && 5∗b<c é avaliada como (a<10) && ((5∗b)<c).
exemplos:
#include <stdio.h>

int main() {
  int a = 5;
  int b = -10;
  int c = 0;
  if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }
  return 0;
}
\\
#include <stdio.h>

int main() {
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}
\\
#include <stdio.h>

int main() {
  float temperatura = 25.0;
  float umidade = 55.0;

  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("As condições estão favoráveis\n");
  } else {
    printf("As condições não estão favoráveis\n");
  }

  return 0;
}
