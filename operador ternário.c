\\Verificação de idade
Imagine imprimir "Maior de idade" se a idade for 18 ou mais, e "Menor de idade" caso contrário. Podemos fazer isso com o seguinte operador ternário
#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}

\\Verificação de temperatura
Aqui observamos se uma temperatura está superior ou inferiro a certo valor. Por exemplo, se a temperatura está superior a 30 graus Celsius
#include <stdio.h>

int main() {
  int temperatura = 28;
  char* estado;

  estado = (temperatura > 30) ? "Calor" : "Frio";

  printf("Estado: %s\n", estado);

  return 0;
}
\\Determinação de maior número
Outro exemplo útil é determinar o maior de dois números. Vamos fazer isso utilizando o seguinte operador ternário.
#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);

  return 0;
}  
\\implmentaçao de if else swtich no mesmo programa
#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);

      // Cálculo da média
      media = (nota1 + nota2) / 2;
      printf("A média do estudante é: %.2f\n", media);
      break;
    case 2:
      // Determinação do status com base na média
      printf("Digite a média do estudante: ");
      scanf("%f", &media);

      if (media >= 7.0) {
        printf("Status: Aprovado\n");
      } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
      } else {
        printf("Status: Reprovado\n");
      }
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}
