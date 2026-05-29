\\Estruturas de decisão aninhadas
if (condicao1) {
  if (condicao2) {
    // Código a ser executado se condicao1 e condicao2 forem verdadeiras
  }
}
\\Estruturas de decisão encadeadas
if (condicao1) {
  // Código a ser executado se condicao1 for verdadeira
} else if (condicao2) {
  // Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
} else {
  // Código a ser executado se todas as condições anteriores forem falsas
}
\\Verificação de idade para classificação etária
#include <stdio.h>

int main() {
  int idade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Você é uma criança\n");
  } else if (idade >= 12 && idade < 18) {
    printf("Você é um adolescente\n");
  } else if (idade >= 18 && idade < 60) {
    printf("Você é um adulto\n");
  } else {
    printf("Você é um idoso\n");
  }

  return 0;
}
\\Determinação de nota escolar
#include <stdio.h>

int main() {
  int nota;

  printf("Digite a sua idade: \n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;
}

\\Estruturas de decisão aninhadas em C
if (condicao1) {
  if (condicao2) {
    // Código a ser executado se condicao1 e condicao2 forem verdadeiras
  }
}

\\exemplos Verificação de idade e renda
#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}
\\exemplo 
#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}
\\A primeira condição if (idade >= 18 && idade <= 65) verifica se a idade do usuário está entre 18 e 65 anos. Se for verdadeira, o programa entra na segunda condição.
A segunda condição if (renda < 3000.0) verifica se a renda do usuário é menor que 3000. Se for verdadeira, o programa entra na terceira condição.
A terceira condição if (dependentes > 2) verifica se o número de dependentes é maior que 2. Se for verdadeira, o programa imprime "Você está qualificado para os benefícios sociais".
Se a terceira condição for falsa, o programa imprime "Você não está qualificado para os benefícios devido ao número de dependentes".
Se a segunda condição for falsa, o programa imprime "Você não está qualificado para os benefícios devido à renda".
Se a primeira condição for falsa, o programa imprime "Você não está qualificado para os benefícios devido à idade".
 

Nesse exemplo, utilizamos estruturas aninhadas para verificar três condições dependentes. Veja!

 

Idade
Renda
Número de dependentes
 

As estruturas de decisão aninhadas são úteis quando você precisa verificar múltiplas condições em diferentes níveis.
Elas permitem que seu programa tome decisões complexas com base em várias condições dependentes. 
Pratique esses conceitos e aplique-os em diferentes cenários para reforçar seu aprendizado.
