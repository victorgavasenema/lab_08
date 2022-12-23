#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct baralho {
    int Player1Carta[3], Player1Naipe[3];
    int Player2Carta[3], Player2Naipe[3];
};

int main()
{   
    srand(time(NULL));
    struct baralho Baralho;
    int i;
    
    for (i = 0; i < 3; i++){
        do{
            Baralho.Player1Carta[i] = 1 + (rand () %12);
            Baralho.Player1Naipe[i] = 1 + (rand () %4);
        }while(Baralho.Player1Carta[i] == Baralho.Player1Carta[i - 1] && Baralho.Player1Naipe[i] == Baralho.Player1Naipe[i - 1]);
    }
    
    for (i = 0; i < 3; i++){
        do{
            Baralho.Player2Carta[i] = 1 + (rand () %13);
            Baralho.Player2Naipe[i] = 1 + (rand () %4);
        }while(Baralho.Player2Carta[i] == Baralho.Player2Carta[i - 1] && Baralho.Player1Naipe[i] == Baralho.Player1Naipe[i - 1] || Baralho.Player2Carta[i] == Baralho.Player1Carta[0] && Baralho.Player1Naipe[i] == Baralho.Player1Naipe[0] | Baralho.Player2Carta[i] == Baralho.Player1Carta[1] && Baralho.Player1Naipe[i] == Baralho.Player1Naipe[1] | Baralho.Player2Carta[i] == Baralho.Player1Carta[2] && Baralho.Player1Naipe[i] == Baralho.Player1Naipe[2]);
    }
    
    //Print das cartas
    printf("Player 1:\n");
    for (i = 0; i < 3; i++){
        if(i >= 0){
            if (Baralho.Player1Carta[i] == 11){
            printf("Dama ");
            }
            else if (Baralho.Player1Carta[i] == 12){
            printf("Valete ");
            }
            else if (Baralho.Player1Carta[i] == 13){
            printf("Rei ");
            }
            else{
            printf("%d ", Baralho.Player1Carta[i]);
            }
        }
            if (Baralho.Player1Naipe[i] == 1){
            printf("Ouro\n");
            }
            else if (Baralho.Player1Naipe[i] == 2){
            printf("Espada\n");
            }
            else if (Baralho.Player1Naipe[i] == 3){
            printf("Copas\n");
            }
            else if (Baralho.Player1Naipe[i] == 4){
            printf("Paus\n");
            }
        }
        
        printf("Player 2:\n");
    for (i = 0; i < 3; i++){
        if(i >= 0){
            if (Baralho.Player2Carta[i] == 11){
            printf("Dama ");
            }
            else if (Baralho.Player2Carta[i] == 12){
            printf("Valete ");
            }
            else if (Baralho.Player2Carta[i] == 13){
            printf("Rei ");
            }
            else{
            printf("%d ", Baralho.Player2Carta[i]);
            }
        }
            if (Baralho.Player2Naipe[i] == 1){
            printf("Ouro\n");
            }
            else if (Baralho.Player2Naipe[i] == 2){
            printf("Espada\n");
            }
            else if (Baralho.Player2Naipe[i] == 3){
            printf("Copas\n");
            }
            else if (Baralho.Player2Naipe[i] == 4){
            printf("Paus\n");
            }
        }
    return 0;
}