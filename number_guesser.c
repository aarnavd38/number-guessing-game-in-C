#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int attempts=0;
    int answer;
    int number;
    int guess;
    srand(time(0));
    number = rand() % 100 +1;
    printf(" HELLO AND WELCOME TO MY NUMBER GUESSING GAME!!!NOW LETS GET THIS GAME STARTED\n");
    printf("you get 5 guess if u manage to guess the random number that has been created in those 5 aattemps u will win the game\n");


    do{
    printf("enter your guess \n");
    scanf("%d",&guess);
    attempts++;
        if(guess > number){
            printf("OPPS THATS TOO HIGH!!\n");
        }
        else if(guess < number){
            printf("OOPS THATS TOO LOW\n");
        }
        else{
            printf("CONGRATULATIONS U HAVE WON!!");
            break;
        }   
    }while(attempts <=5);
    
    if(guess !=number){
        printf("sorry u used all ur 5 attempts. the number was %d ",number);
    }
    return 0;
}

