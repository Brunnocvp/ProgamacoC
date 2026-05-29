switch (variavel) {
  case valor1:
    // Código a ser executado se variavel == valor1
    break;
  case valor2:
    // Código a ser executado se variavel == valor2
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
}
//exemplo
#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}
\\odigo em if e else
int main() {
  int dia = 3;

  if (dia == 1) {
    printf("Domingo\n");
  } else if (dia == 2) {
    printf("Segunda-feira\n");
  } else if (dia == 3) {
    printf("Terça-feira\n");
  } else if (dia == 4) {
    printf("Quarta-feira\n");
  } else if (dia == 5) {
    printf("Quinta-feira\n");
  } else if (dia == 6) {
    printf("Sexta-feira\n");
  } else if (dia == 7) {
    printf("Sábado\n");
  } else {
    printf("Dia inválido\n");
  }

  return 0;
}
\\ agora simplificando com swith
#include <stdio.h>

int main() {
  int dia = 3;

  switch (dia) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  return 0;
}
\\Primeiramente, vamos criar um menu que apresenta ao usuário as seguintes opções:
Iniciar jogo
Ver regras
Sair
Considerando essas opções, confira o código básico para esse menu.
#include <stdio.h>

int main() {
  int opcao;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n");
      // Código para iniciar o jogo
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}
\\Exemplo prático: jogo de adivinhação
Para tornar nosso menu mais interessante, vamos adicionar uma funcionalidade de jogo simples: crie um jogo de adivinhação em que o usuário precisa acertar um número entre 1 e 10.
  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 10 + 1;
      printf("Adivinhe o número (entre 1 e 10): \n");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}
