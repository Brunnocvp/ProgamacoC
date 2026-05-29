> : Maior que
< : Menor que
>= : Maior ou igual a
<= : Menor ou igual a
== : Igual a
!= : Diferente de

Portugol.dev
PRECO1 <- 50.0
PRECO2 <- 75.0
SE PRECO1 < PRECO2 ENTÃO
ESCREVA "O produto 1 é mais barato."
SENÃO_SE PRECO1> PRECO2 ENTÃO
ESCREVA "O produto 2 é mais barato."
SENÃO
ESCREVA "Os produtos têm o mesmo preço."
FIM_SE

#include <stdio.h>

int main() {
  int numero1 = 8;
  int numero2 = 5;

  if (numero1 > numero2) {
    printf("numero1 é maior que numero2\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int idade = 20;

  if (idade >= 18) {
    printf("Você é maior de idade\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  float temperatura = 32.0;

  if (temperatura > 30.0) {
    printf("Está calor\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int nota = 75;

  if (nota >= 60) {
    printf("Você passou!\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int idade1 = 25;
  int idade2 = 30;

  if (idade1 > idade2) {
    printf("Pessoa 1 é mais velha que Pessoa 2\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int numero = 4;

  if (numero % 2 == 0) {
    printf("O número é par\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int estoque = 3;

  if (estoque < 5) {
    printf("Estoque baixo\n");
  }

  return 0;
}
