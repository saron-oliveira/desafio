#include <stdio.h>
int main() {
    int idade;
    printf("qual a sua idade:");
    scanf("%d", &idade);
    if(idade>=60){
        printf("voto nao e mais obrigatorio \n");
    }else if(idade>=16)
    {printf("pode votar, mas nao e obrigatorio \n");
    }else if(idade>=18){
        printf("ja pode votar \n");
    }else {
        printf("idade invalida para votar");
    }
return 0;
}