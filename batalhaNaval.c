#include <stdio.h>

#define coluna 10
#define linha 11
int main (){
    //Tabuleiro de Batalha Naval
    //Print do tabuleiro

    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("   ");
    for(int i = 0; i < 10; i++){
        printf("%c  ", letras[i]);
    }
    printf("\n");
    int tabuleiro[10][11] = { 
        {0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 2, 2, 2, 0, 0, 0, 0, 3, 0, 0},
        {2, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0},
        {3, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3},
        {4, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {7, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {9, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0}


    };


            for (int i = 0; i < coluna; i++){
                for (int j = 0; j < linha; j++)
                {
                    printf("%d  ", tabuleiro[i][j]);
                }
                printf("\n");
             }

            
             
        



    return 0;
}