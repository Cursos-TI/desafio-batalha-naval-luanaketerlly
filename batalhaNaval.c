#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    int matriz [LINHAS][COLUNAS];   
    int i, j;
       //Declarando valores contidos na primra linha da matriz.
    int colunas [10] = {"A", "B", "C", "D", "E", "F", "G","H", "I", "J"};
   

         //Início da condição para apresentar no console os valores determinados na matriz
        printf("   ");
           for (i = 0; i < LINHAS; i++) {  //Adicionando incremento para exibir a sequência da primeira primeira linha
                printf(" %d ", 'A' + j); 
            }
                printf("\n");

           for (j = 0; j < COLUNAS; j++){
                printf("%2d ", j);   //Código para exibir a primeira coluna enumerada do tabuleiro

                for (j = 0; j < 10; j++) {
                    printf(" %d ", matriz [i][j]); //Percorre linhas e colunas
                }
                printf("\n");
            }
                




    return 0;
}
