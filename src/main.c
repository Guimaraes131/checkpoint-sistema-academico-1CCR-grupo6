#include<stdio.h>

int main() {

    int escolha;
    float nota1, nota2;

    printf("==============================\n");
    printf("      SISTEMA EQUIPE 6\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma Opcao: ");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);

        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        break;
    case 2:
        float media = (nota1 + nota2) / 2;
        printf("A media do aluno e: %f", media);
        break;
    case 3:
     
        break;
    case 4:
     
        break;
    case 5:
     
        break;
    
    default:
        break;
    }



    
    return 0;
}