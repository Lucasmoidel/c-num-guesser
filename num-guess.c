#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char UserName[] = "";
    printf("what is your name?\n");
    scanf("%s", UserName);
    printf("hello %s \n", UserName);
    while (true) {
        srand(time(NULL));
        char replay[2] = "";
        int UserGuess = 0;
        printf("guess a number between 1 and 100\n");
        int RanNum = rand() % 100 + 1; 
        //printf("%d\n", RanNum);
        while (true) {   
            scanf("%d", &UserGuess);
            if (RanNum == UserGuess)
            {
                printf("you did it\n");
                printf("would you like to play again y or n\n");
                scanf("%s", replay);
                if  (replay[0] == "y") {
                    break;
                } else if (replay[0] == "n"){
                    return 0;
                }
                
            } else if (RanNum > UserGuess) {
                printf("too low\n");
                continue;
            } else if (RanNum < UserGuess) {
                printf("too high\n");
                continue;
            }
            break;
        }
    }
}