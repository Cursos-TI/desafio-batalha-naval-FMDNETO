//DESAFIO INICIANTE BATALHA NAVAL
//INICIALIZAÇÃO DO TABULEIRO E POSIÇÃO DOS NAVIOS
//UM NAVIO VERTICAL E UM HORIZONTAL

#include <stdio.h>

int main(){
    //O TABULEIRO SERÁ FEITO COM 0 E NAVIOS COM 3
    //A MATRIZ TERÁ O TAMANHO 10x10
    int tabuleiro[10][10];
    int i,j; //VARIAVEIS DAS COORDENADAS DA MATRIZ
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //LINHAS DO TABULEIRO

    // EXIBINDO O TABULEIRO VAZIO

    printf("\n      BATALHA NAVAL\n"); // Mais espaços para centralizar
    printf("   "); // Espaço para alinhar com os índices das linhas
    for(j=0; j<10; j++){
        printf("%c ", linha[j]); // Exibe as letras das colunas
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("%2d ", i+1); // Exibe o índice da linha (com 2 dígitos para alinhar)
        for(j=0; j<10; j++){
            tabuleiro[i][j] = 0; // INICIALIZAÇÃO DO TABULEIRO COM 0
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // PULA LINHA APÓS CADA LINHA DO TABULEIRO
    }

    //POSIONANDO OS NAVIOS
    
    //NAVIO HORIZONTAL NA LINHA 2, COLUNA 3
    for(j=2; j<5; j++){
        tabuleiro[1][j] = 3; // LINHA 2 (índice 1), COLUNAS 3 A 5 (índices 2 a 4)
    }


    //NAVIO VERTICAL NA LINHA 5, COLUNA 7
    for(i=5; i<8; i++){
        tabuleiro[i][6] = 3; // COLUNA 7 (índice 6), LINHAS 5 A 7 (índices 5 a 7)
    }


    // EXIBINDO O TABULEIRO COM OS NAVIOS POSICIONADOS
    printf("\n      BATALHA NAVAL\n");
    printf("   "); // Espaço para alinhar com os índices das linhas
    for(j=0; j<10; j++){
        printf("%c ", linha[j]); // Exibe as letras das colunas
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("%2d ", i+1); // Exibe o índice da linha (com 2 dígitos para alinhar)
        for(j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]); // Exibe o valor do tabuleiro (0 ou 3)
        }
        printf("\n"); // PULA LINHA APÓS CADA LINHA DO TABULEIRO
    }
    return 0; // FIM DO PROGRAMA
    
}
