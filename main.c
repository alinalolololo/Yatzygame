#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL)); //seed with current time
    
    int num_players = 0;
    printf("Welcome to the game of Yatzy!\n");
    printf("Enter a number of players(2-6): ");

    if (scanf("%d", &num_players) != 1){
        printf("Not a valid number!\n");
        return 1;
    }
    if (num_players<2 || num_players>6){
        printf("Too big of a number!");
        return 1;
    }
    printf("Now we can start playing");

    return 0;
}