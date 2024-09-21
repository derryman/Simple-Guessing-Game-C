/*
- Derry Mahon
- C program to generate one random number between 1 – 10 and display the amount of correct/incorrect guesses
- 07/11/2022
*/
#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

int main()
{
    int num = 0;
    int num2;
    int correct = 0;
    int incorrect = 0;
    int i = 0;
    //while loop to run code 5 times giving user 5 attempts at guessing
    while (i < 5)
    {
        //asking the user to input an integer 1-10
        printf("Enter a number between 1-10:\n");
        scanf("%d",&num2);
        //amount of times programme has run
        i = i + 1;
        
        printf("Generating a random number between 1 - 10 \n");
        // seed the random number generator with a range 0 – large number
        srand(time(NULL));
        // num is assigned a random number between 1 – 10
        num = (rand() % 10) + 1;
       //if the guessed number (num2) is equal to the random generated number (num) the programme prints that these are the same number
        if(num == num2)
        {
            printf("Same Numbers\n");
            //when num2 == num, correct counter + 1
            correct = correct + 1;
        }
        //the else if statement means if an invalid integer is inputted the user is told so
        else if(num2 > 10 || num2 < 1)
        {
            printf("Invalid input!\n");
            //this prevents the user from losing attempts by inputting an invalid input
            i = i - 1;
        }
        //the else statement means when num2 is != num the system prints that they are different
        else
        {
            printf("Different Numbers\n");
            //incorrect counter + 1
            incorrect = incorrect + 1;
        }
    }
    // these print the amount of times the user guessed correctly and incorrectly
    printf("You guessed correct %d times\n",correct);
    printf("You guessed incorrect %d times\n", incorrect);

    return 0;
} // end main