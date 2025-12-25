// Name: Bismah Farooq
// Description: This is a C program , it is a game that gives the user three cups with only one cup has a ball inside it, user has to guess which cup has a ball. If a user guessed it correctly they'll win the amount that they bet on and if not then they'll loose the money. This program also asks the user if they want to play again or not.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
// introduction for the game
    printf("-Shell Game\n");
    printf("Find the ball to double your bet!\n");
    
    // makes the computer randomly select what cup should have a ball
    srand(time(NULL));
    
    int TotalbetAmount = 100;
    char playAgain = 'Y';
    int betAmount;
    
//playing the game in the loop if yser wants to play again and break the program if user do not want to continue.
    while ((playAgain == 'Y' || playAgain == 'y') && TotalbetAmount > 0)
    {
        printf("You have $%d\n",TotalbetAmount);
        
        printf("Bet Amount? ");
        scanf("%d", &betAmount);
        
// if bet amount is greater than what a user had left with ..
        if (betAmount > TotalbetAmount){
            printf("You have $%d\n",TotalbetAmount);
            printf("Bet Amount? ");
            scanf("%d", &betAmount);
        }
        
        printf("  ___     ___     ___\n");
        printf(" /   \\   /   \\   /   \\\n");
        printf("/  1  \\ /  2  \\ /  3  \\\n");
        printf("------- ------- -------\n");
        
// user making a guess and if guess is greater than 3 it will display the message again.
        int guess = 0;
        printf("Make a guess: ");
        scanf("%d", &guess);
        
        if (guess >= 4){
            int guess = 0;
            printf("Make a guess: ");
            scanf("%d", &guess);
        }
        
// randomly select where a ball should be
        int ball = rand() % 3 + 1;
        printf("  ___     ___     ___\n");
        printf(" /   \\   /   \\   /   \\\n");
        for(int i =1; i <= 3; i++){
            if (i == ball){
                printf("/  o  \\ ");
            } else {
                printf("/     \\ ");
            }
        }
        printf("\n");
        printf("------- ------- -------\n");
        
// displaying the messages if user win or lose
        if (guess == ball) {
                printf("Congratulations! You win $%d.\n", betAmount);
                TotalbetAmount += betAmount;
            } else {
                printf("Sorry... you lose $%d.\n", betAmount);
                TotalbetAmount -= betAmount;
            }
        
// if user is out of money the program will break
        if (TotalbetAmount <= 0){
            printf("You're out of money! Game over.");
            break;
        }
    
        printf("Play again? (Y/N): ");
        scanf(" %c", &playAgain);
        printf("\n");
    }
    return 0;
}

