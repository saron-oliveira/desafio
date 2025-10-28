#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
}aluno;

int main() {
    aluno lista [100];
    int opcao;
    int qtd = 0;
 
    do {
        printf("escolha uma opcao: \n");
        printf("1:adicionar aluno \n2:lista de alunos \n3:encerrar\n");
        printf("OPCAO:");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                if (qtd < 100)
                {printf("digite o nome do aluno: ");
            fgets(lista[qtd].nome, sizeof(lista[qtd].nome), stdin);
            size_t len = strlen(lista[qtd].nome);
            if (len >0 && lista[qtd].nome[len - 1] == '\n') {
                lista[qtd].nome[len -1] = '\0';
            }
        printf("digite a idade do aluno: ");
        scanf("%d", &lista[qtd].idade );
        printf("digite a nota do aluno: ");
        scanf("%f", &lista[qtd].nota );
        getchar(); // limpa o "enter"
 
        qtd++;// aumenta a contagem de alunos
        }
             else{
                printf("limite de alunos atingidos.\n");
             }
             break;
        case 2:
        if(qtd == 0){
            printf("nenhum aluno cadastrado\n");
        }else{
        printf("------lista de alunos------\n");
        for (int i = 0; i < qtd; i++){
            printf("aluno %d:\n", i + 1);
            printf("nome: %s\n", lista[i].nome);
            printf("idade do aluno: %d\n", lista[i].idade);
            printf("nota do aluno: %.f\n", lista[i].nota);
            printf("----------------------------------------------\n");
        }
        }
        break;
        case 3:
            printf("encerrando programa......\n");
            break;
        default:
        printf("opcao invalida\n");
        }


    }while (opcao != 3);
return 0;
}