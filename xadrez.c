// *** Primeira Versão ***

#include <stdio.h>

int main(){

    int jogador, bispo = 0, torre, rainha = 0, casas; // Variáveis
    int paraCima, paraBaixo, direita, esquerda; // Variáveis de direção 
    /*
    Torre - For
    Bispo - While
    Rainha - Do-While
    */

    // ====== Menu Xadrez ======

    printf("\n||| Seja bem vindo ao Xadre |||\n");
    printf("- Selecione uma das opções -\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    // ... Caso digite 2 jogo será encerrado ...
    if (jogador == 2)
    {
        printf("Saindo do jogo....\n");

        return 1;
    }

    // ====== Escolha da Peça ======

    printf("\n||| Escolha a peça |||\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    switch (jogador)
    {
    case 1:
        printf("\n||| Você escolheu a Torre|||\n");
         // ====== Escolha da Direção ======
        printf("\n||| Escolha a direção |||\n");
        printf("1. Para cima.\n");
        printf("Escolha: ");
        scanf("%d", &jogador);
        // ===== Escolha do avanço das casas =====
        printf("Mover quantas vezes?\n");
            printf("1.\n");
            printf("2.\n");
            printf("3.\n");
            printf("4.\n");
            printf("5.\n");
            printf("6.\n");
            printf("7.\n");
            printf("8.\n");
            printf("Selecione: ");
            scanf("%d", &casas);
        for (torre = 0; torre < casas; torre++) // Valor inicial da Torre (0) e o limite de repetições = casas
            {
                printf("Torre para cima %d vezes!\n", casas);
            }
        break;
    
    case 2:
        printf("\n||| Você escolheu o Bispo|||\n");
          // ====== Escolha da Direção ======
          printf("\n||| Escolha a direção |||\n");
          printf("1. Para cima (Direita).\n");
          printf("Escolha: ");
          scanf("%d", &jogador);
          // ===== Escolha do avanço das casas =====
          printf("Mover quantas vezes?\n");
              printf("1.\n");
              printf("2.\n");
              printf("3.\n");
              printf("4.\n");
              printf("5.\n");
              printf("6.\n");
              printf("7.\n");
              printf("8.\n");
              printf("Selecione: ");
              scanf("%d", &casas);
        while (bispo < casas) // Valor inicial do Bispo (0) e o limite de repetições = casas
            {
                printf("Bispo cima, direita %d vezes!\n", casas);
                  
                  bispo++;
            }
        break;

    case 3:
        printf("\n||| Você escolheu a Rainha|||\n");
         // ====== Escolha da Direção ======
         printf("\n||| Escolha a direção |||\n");
         printf("1. Esquerda.\n");
         printf("Escolha: ");
         scanf("%d", &jogador);
         // ===== Escolha do avanço das casas =====
         printf("Mover quantas vezes?\n");
             printf("1.\n");
             printf("2.\n");
             printf("3.\n");
             printf("4.\n");
             printf("5.\n");
             printf("6.\n");
             printf("7.\n");
             printf("8.\n");
             printf("Selecione: ");
             scanf("%d", &casas);
     do
     {
        printf("Rainha esquerda %d vezes!\n", casas);
            rainha++;
     } while (rainha < casas); // Valor inicial da Rainha (0) e o limite de repetições = casas
     
        break;

    default:
    printf("Opção inválida!");
        break;
    }
        return 0;
    }
