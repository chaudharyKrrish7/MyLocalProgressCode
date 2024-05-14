#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLim = 3;
    int outOfGuesses = 0;
    while (guess != secretNum && outOfGuesses==0)
    {
        if (guessCount < guessLim)
        {
            printf("enter a number");
            scanf("%d" , &guess);
            guessCount++;
        }else{
            outOfGuesses = 1;
        }
    }
        if (outOfGuesses == 1)
        {
            printf("Game over!!");
        }
        else{
            printf("u win!!");
        }
    
    
    
    
}