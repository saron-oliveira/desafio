#include <stdio.h>
int main(){
    float numero1, numero2;
    int opcao;
    printf("qual o primeiro numero?: ");
    scanf("%f", &numero1);
    printf("qual o segundo numero?: ");
    scanf("%f",&numero2);
    printf("qual operacao ira usar: \n"
        "1:soma \n"
        "2:subtracao \n"
        "3:divisao \n"
        "4:multiplicacao \n"
        "digite o numero conrespondente a operacao: ");
        scanf ("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("a soma deles e igual a:%.0f\n",numero1+numero2 );
            break;
        
        case 2:
        printf("tirando %.0f de %.0f temos %.0f\n", numero2, numero1, numero1-numero2);
            break;

        case 3:
        if (numero2 ==0) {
        printf("nao tem como dividir por 0");
        } else {
        printf("dividindo %.0f por %.0f, temos: %.3f\n", numero1, numero2, numero1/numero2);    
        }break;
        case 4:
        printf("multiplicando %.0f por %.0f, temos %.0f\n", numero1, numero2, numero1 * numero2);
    }
    
    
    return 0;
}