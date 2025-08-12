#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
     //Iniciando a matriz com todas as casas zeradas.
       int  matriz [LINHAS][COLUNAS] = {0};
       int i, j;

      //Posicionando os navios através dos índices da matriz...
        matriz [1][5] = 3;  //Navio horizontal
        matriz [1][6] = 3;
        matriz [1][7] = 3;

        matriz [3][8] = 3; //Navio vertical
        matriz [4][8] = 3;
        matriz [5][8] = 3;

        matriz [6][3] = 3; //Navio diagonal
        matriz [5][2] = 3;
        matriz [4][1] = 3;

        matriz [7][7] = 3; //Navio diagonal
        matriz [8][6] = 3;
        matriz [9][5] = 3;

         //Início da condição para apresentar no console os valores determinados na matriz
        printf("   ");
           for (j = 0; j < COLUNAS; j++) {  //For para exibir COLUNAS
               printf(" %c", 'A' + j);      //Exibir a primeira linha com as letras de A-J
            }
                printf("\n");

           for (i = 0; i < LINHAS; i++){    //For para exibir as LINHAS
                printf("%2d ",i);           //Exibir a primeira coluna com os números na lateral 
                for (j = 0; j < COLUNAS; j++){
                    printf(" %d", matriz [i][j]);  //Percorrer linhas - colunas
                } 

                
                printf("\n");
            }
            

    return 0;
}
