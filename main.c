case 2: // Calcular média
                if (notasInseridas) {
                    media = (nota1 + nota2) / 2;
                    printf("Media calculada: %.2f\n", media);
                } else {
                    printf("Insira as notas primeiro!\n");
                }
                break;
                
case 4: // Exibir resultado
                printf("\n------ RESULTADO ------\n");
                printf("Nota 1: %.2f\n", nota1);
                printf("Nota 2: %.2f\n", nota2);
                printf("Media: %.2f\n", media);
                printf("----------------------\n");
                break;