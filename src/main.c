#include<stdio.h>

void derivada(int a, int b, int c)
{
    
}

int main() {

    int escolha;
    float nota1, nota2;

    do
    {
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

                float media = (nota1 + nota2) / 2;
                
                break;
            case 2:
                printf("A media do aluno e: %f\n", media);
                break;
            case 3:
                if (media >= 6){
                    printf("Aluno Aprovado!\n");
                } else {
                    printf("Aluno Reprovado!\n");
                }
            
                break;
            case 4:
                printf("Nota 1: %f\n", nota1);    
                printf("Nota 2: %f\n", nota2);    
                printf("Media: %f\n", media);    
            
                break;
            case 5:
            
                break;
            
            default:
                break;
        }

    } while (escolha != 6);

    return 0;
}