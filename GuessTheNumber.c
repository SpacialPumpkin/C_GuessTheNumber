#include <stdio.h>
#include <string.h>

int playGame()
{
    int secretNumber = 8;
    int input = 0;
    int fails = 0;

    printf("\nWelcome to the Guess the Secret Number Game, with your Host, Dr. C!\n");
    printf("Guess right, and you could win a free Congratulations message!\n");

    while(input != secretNumber){

        printf("\nType a number, then press Enter to Guess!\n");
        //integer variable is %d, & is needed in this line for the variable after scanf
        scanf("%d",&input);
        printf("You guessed %d.", input);

        //Failure
        if( input != secretNumber){
            printf(" Wrong! But don't worry, I'm giving you another chance!\n");
            //Increment fail count
            fails++;
            printf("Here's how many times you've failed! Fails: %d \n", fails);
        }

    }
    //You Win
    printf(" Correct! You Win! And like I promised...Congratulations!\n");
    printf("Thanks for playing! This has been your host, Dr. C, now back to the main function! \n\n");
    return 0;
}

//main function
int main()
{   
    //Menu Start
    while(1){
    
        printf("Would you like to play Guess the Secret Number? Say Yes!\n");
        char answer[10] = "";
        scanf("%s",answer);

        //Check if they said "Yes!" or "Yes".
        int compareYes = -1;
        if (strcmp(answer,"Yes!") == 0 || strcmp(answer,"Yes") == 0){
            compareYes = 0;
        }

        //Check if they said "No".
        int compareNo = strcmp(answer,"No");

        //Yes - Play Game
        if(compareYes == 0 && compareNo != 0){
            playGame();
        }
        //No - Complain!
        else if(compareYes !=0 && compareNo == 0){
            printf("Aw come on! Try it, it's fun!\n");
        }
        //What did they say?
        else{
            printf("Sorry! I didn't understand what you said...\n");
        }

    }
    //End the Program
    return 0;
}