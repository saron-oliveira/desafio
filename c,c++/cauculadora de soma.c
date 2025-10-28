#include <stdio.h>
int main() {
    int numero1 ,numero2;
    float soma;
    printf("qual o primeiro numero:");
    scanf("%d", &numero1);
    printf("qual o segundo numero:");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    printf("a soma e = %f", soma);
    return 0;
}