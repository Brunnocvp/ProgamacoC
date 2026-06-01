\\em for Veja como usar loops for aninhados para imprimir uma tabela de multiplicação de 1 a 10.
#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}
\\Nesse exemplo, temos um loop for dentro de outro loop for. O loop externo controla as linhas (multiplicando), 
e o loop interno controla as colunas (multiplicador). Para cada valor de i (de 1 a 10),o loop interno percorre j (de 1 a 10), e, em cada iteração do loop interno
, a multiplicação de i e j é impressa.
  \\ em while 
#include <stdio.h>
 
int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
\\em do-while
  #include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}
\\
