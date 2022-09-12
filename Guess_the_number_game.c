#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
    char c;
    int number,guess,n_guesses=0,difficulty=0;
    do
    {
        printf("Enter the difficulty level \n");
        printf("1. You are El Jefe!!\n");
        printf("2. Easy\n");
        printf("3. Medium\n");
        printf("4. Hard\n");
        printf("5. May La Santa Muerte shield you from death\n");
        printf("6. Exit game\n");
        scanf("%d",&difficulty);
        switch (difficulty){
            case 1:
            printf("You have selected 'You are El Jefe!!' difficulty level\n");
            printf("There are infinite number of guesses available and the range of number is 0 to 100\n");
            srand(time(0));
            number = rand() % 100 + 1;
            printf("Guess the number between 1 to 100\n");
            do{
                scanf("%d",&guess);
                if(guess > number){
                    printf("Lower the number please!\n");
                }
                else if(guess < number){
                    printf("Increase the number please!\n");
                }
                else{
                    printf("You have guessed it correctly!\n");
                    printf("Number of guesses used : %d",n_guesses);
                }
                n_guesses++;
            }while(guess != number);
            break;

            case 2:
            printf("You have selected 'Easy' difficulty level\n");
            printf("There are 20 guesses available and the range of number is 0 to 200\n");
            srand(time(0));
            number = rand() % 200 + 1;
            printf("Guess the number between 1 to 200\n");
            do{
                scanf("%d",&guess);
                if(guess > number){
                    printf("Lower the number please!\n");
                }
                else if(guess < number){
                    printf("Increase the number please!\n");
                }
                else{
                    printf("You have guessed it correctly!\n");
                    printf("Number of guesses used : %d",n_guesses);
                }
                n_guesses++;
            }while(n_guesses != 20);
            if(n_guesses >= 20) printf("You have run out of guesses\n");
            break;

            case 3:
            printf("You have selected 'Medium' difficulty level\n");
            printf("There are 10 guesses available and the range of number is 0 to 300\n");
            srand(time(0));
            number = rand() % 300 + 1;
            printf("Guess the number between 1 to 300\n");
            do{
                scanf("%d",&guess);
                if(guess > number){
                    printf("Lower the number please!\n");
                }
                else if(guess < number){
                    printf("Increase the number please!\n");
                }
                else{
                    printf("You have guessed it correctly!\n");
                    printf("Number of guesses used : %d",n_guesses);
                }
                n_guesses++;
            }while(n_guesses != 10);
            if(n_guesses >= 10) printf("You have run out of guesses\n");
            break;

            case 4:
            printf("You have selected 'Hard' difficulty level\n");
            printf("There are 10 guesses available and the range of number is 0 to 500\n");
            srand(time(0));
            number = rand() % 500 + 1;
            printf("Guess the number between 1 to 500\n");
            do{
                scanf("%d",&guess);
                if(guess > number){
                    printf("Lower the number please!\n");
                }
                else if(guess < number){
                    printf("Increase the number please!\n");
                }
                else{
                    printf("You have guessed it correctly!\n");
                    printf("Number of guesses used : %d",n_guesses);
                }
                n_guesses++;
            }while(n_guesses != 10);
            if(n_guesses >= 10) printf("You have run out of guesses\n");
            break;

            case 5:
            printf("You have selected 'May La Santa Muerte shield you from death' difficulty level\n");
            printf("There are 5 guesses available and the range of number is 0 to 1000\n");
            srand(time(0));
            number = rand() % 1000 + 1;
            printf("Guess the number between 1 to 1000\n");
            do{
                scanf("%d",&guess);
                if(guess > number){
                    printf("Lower the number please!\n");
                }
                else if(guess < number){
                    printf("Increase the number please!\n");
                }
                else{
                    printf("You have guessed it correctly!\n");
                    printf("Number of guesses used : %d",n_guesses);
                }
                n_guesses++;
            }while(n_guesses != 5);
            if(n_guesses >= 5) printf("You have run out of guesses\n");
            break;

            case 6:
            exit(1); 

            default: 
            printf("\nInvalid choice\n"); 
            break;
        }while(difficulty != 6);
    }while(c == 'y' || c == 'Y');

    printf("Do you want to play again ? (Y/N)\n");
    //fflush(stdin);
    scanf("%c",&c);
    return 0;
}