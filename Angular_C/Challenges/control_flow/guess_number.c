// 1. Generate random number 0 -20
// 2. Ask user to guess the randomly generated number (only numbers 0 - 20)
//3. notify if the guess is too high or too low
//4. if correct = Congrats
//5. Only get five tries.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //1. 
    // declare variable time_t
    time_t t;
    srand((unsigned)time(&t));
    int rand_num = rand() % 21;

    //2. 
    //declare user guess
    int user_guess;
    int tries = 5;

    do 
    {
        printf("Pick a Value between 0 and 20.\n");
        scanf("%d", &user_guess);
        if(user_guess > 20)
            {
                while (user_guess > 20) 
                {
                printf("Sorry, this number is greater than 20 and is not a valid answer, please enter a number less than 20\n");
                scanf("%d", &user_guess);
                }
                printf("Excellent, you picked %d a valid answer\n", user_guess);
            } 

        else 
            {
                printf("You chose %d, a valid answer\n", user_guess);
            }



        if (tries == 0)
            {
            printf("Game over!");
            break;
            }
        else if(user_guess > rand_num)
            {
                printf("However, your number is too high\n");
                tries--;
                printf("Try again, you have %d tries remaining\n",tries);
            }
        else if (user_guess < rand_num)
            {
                printf("However, your number is too low\n");
                tries--;
                printf("Try again, you have %d tries remaining\n",tries);
            }
        else if (user_guess == rand_num)
            {
                printf("Congratulations! You guessed correctly\n");
                break;
            } 
        else 
        {
            break;
        }
    } while (tries != 0);

    return 0;

    }


   





































    // //1. 
    // // declare variable time_t
    // time_t t;
    // srand((unsigned)time(&t));
    // int rand_num = rand() % 21;

    // //2. 
    // //declare user guess
    // int user_guess;
    // int tries = 0;

    // printf("Pick a Value between 0 and 20.\n");
    // scanf("%d", &user_guess);

    // if(user_guess > 20)
    // {
    //     while (user_guess > 20) {
    //     printf("Sorry, this number is greater than 20 and is not a valid answer, please enter a number less than 20\n");
    //     scanf("%d", &user_guess);
    //     }
    //     printf("Excellent, you picked %d a valid answer\n", user_guess);
    // } 

    // else 
    // {
    //     printf("You chose %d, a valid answer\n", user_guess);
    // }
   
    // do
    // {
    //      if(user_guess > rand_num)
    //     {
    //         printf("However, your number is too high\n");
    //         tries += 1;
    //         printf("tries right now %d\n",tries);
    //     }
    //     else if (user_guess < rand_num)
    //     {
    //         printf("However, your number is too low\n");
    //         tries +=1;
    //         printf("tries right now %d\n", tries);
    //     }
    //     else
    //     {
    //     printf("You guessed correctly\n");
    //     } 
    // } while (tries < 5);






//     return 0;
// }
