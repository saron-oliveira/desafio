#include <stdio.h>
#include <string.h>
int main() {
    char palavra[100];
    printf("qual a palavra? :");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    printf("a palavra tem %d algarismo \n",tamanho);
    return 0;
}