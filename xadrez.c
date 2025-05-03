// *** Primeira Versão ***

#include <stdio.h>

int main(){

    int jogador, bispo = 0, torre, rainha; // Variáveis 
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
    
    return 0;
}