// *** Primeira Versão ***

#include <stdio.h>

int main(){

    int jogador, bispo = 0, torre, rainha, casas; // Variáveis
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

    // ====== Escolha da Direção ======
    printf("\n||| Escolha a direção |||\n");
    printf("1. Para cima.\n");
    printf("2. Para baixo.\n");
    printf("3. Para esquerda.\n");
    printf("4. Para direita.\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    switch (jogador)
    if (jogador == torre)
    {
    
    {
    case 1:
        if (jogador == 1)
        {
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
        } for (torre = 0; torre < casas; torre++) // Valor inicial da Torre (0) e até quantas casas andará (5)
        {
            printf("Para cima %d vezes!\n", casas);
        }
        break;    
    
    case 2:
    if (jogador == 2)
    {
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
    }

        break;

    case 3:
    if (jogador == 3)
    {
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
    }

        break;

    case 4:
    if (jogador == 4)
        {
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
        }

        break;
    
    default:
        break;
    }
}
    /*
    // ----- Torre -----
    if (jogador == 1){
    for (torre = 0; torre <5 ; torre++) // Valor inicial da Torre (0) e até quantas casas andará (5)
    {
        printf("Direita!\n");
    }
}

    // ----- Bispo -----
    if (jogador == 2){
        while (bispo < 5)
        {
            printf("Cima, direita!\n", bispo);
            
            bispo++;
        }
    }
    
    // ----- Rainha -----    
    if (jogador == 3)
    {
        rainha = 0; // Valor Inicial da Rainha
        do
        {
            if (rainha < 8)
            {
                printf("Esquerda!\n");

                rainha++;
            }
            
        } while (rainha < 8);
    
            printf("jogo encerrado.");
    }
            */
    
    return 0;
}