#include <stdio.h>

int main() {

        //Declarando variáveis que representam Linhas (y) e colunas (x)    
    int x,y;

       //Declarando valores contidos na primra linha da matriz.
     char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J'};

       //Declarando tipo de variável e tamanho do tabuleiro
     char tabuleiro [10] [10] = {

       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '3', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '3', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '3', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
       {'0' ,'0' ,'0', '0', '0', '0', '0', '0', '0', '0'},
    };   

         //Início da condição para apresentar no console os valores determinados na matriz
        printf("   ");
            for (x = 0; x < 10; x++) {  //Adicionando incremento para exibir a sequência da primeira primeira linha
                printf(" %c ", 'A' + x); 
            }
                printf("\n");

            for (y = 0; y < 10; y++){
                printf("%2d ", y);   //Código para exibir a primeira coluna enumerada do tabuleiro

                for (x = 0; x < 10; x++) {
                    printf(" %c ", tabuleiro [y][x]); //Percorre linhas e colunas
                }
                printf("\n");
            }
                




    return 0;
}
