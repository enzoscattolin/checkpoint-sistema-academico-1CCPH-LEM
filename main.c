#include <stdio.h>

int main(){
     int opcao, presenca;
    float nota1, nota2, media;
    printf("______________Menu_______________\n");
    printf("Selecione a opcao\n");
    printf("1 - caucular a nota do aluno\n");
    printf("2 - verificar presenca do aluno\n");
    printf("______________Menu_______________\n");

    printf("selecione a opcao desejada: \n");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:      
    printf("______________Cauculadora______________\n");        
    printf("digite sua primeira nota:");
    scanf("%f", &nota1);
    printf("digite sua segunda nota:");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    printf("A media e: %.2f \n", media );
   
    if(media >= 9 ){
    printf("Exelente, cotinue assim");
    } else if(media >= 6){
    printf("Aprovado");
    } else if(media >= 6){
    printf("recuperacao");
    } else{
    printf("reprovado");}


    break;

     case 2: // Calcular média
                if (notasInseridas) {
                    media = (nota1 + nota2) / 2;
                    printf("Media calculada: %.2f\n", media);
                } else {
                    printf("Insira as notas primeiro!\n");
                }
                break;

        case 3: // Verificar situação
                    if (media >= 7) {
                        printf("Aprovado");
                    } else if (media >= 5) {
                        printf("Recuperacao");
                    } else {
                        printf("Reprovado");
                    }
                break;
                
        case 4: // Exibir resultado
                printf("\n------ RESULTADO ------\n");
                printf("Nota 1: %.2f\n", nota1);
                printf("Nota 2: %.2f\n", nota2);
                printf("Media: %.2f\n", media);
                printf("----------------------\n");
                break;
                    case 6: // Sair
                printf("Saindo do sistema...\n");
                return 0;
                
        case 5: { // Calcular derivada
                printf("Digite o valor de a: ");
                scanf("%f", &a);
 
 
                printf("Digite o valor de b: ");
                scanf("%f", &b);
 
 
                printf("Digite o valor de c: ");
                scanf("%f", &c);
 
 
            default:
                printf("Opcao invalida!\n");
 
                   return 0;
        }
    }
 
}
 