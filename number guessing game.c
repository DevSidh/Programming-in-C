#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed the random generator
    
    int randomnum = (rand() % 100) + 1;
    int inp,attempt=0;

    printf("?? Welcome to the Number Guessing Game!\n");

    while (1) {
        printf("\nEnter your guess (1-100): ");
        scanf("%d", &inp);

        if (inp < 1 || inp > 100) {
            printf("? Invalid input! Please enter a number between 1 and 100.\n");
			continue;
        }

        if (inp == randomnum) {
            printf("? Congratulations!!! You guessed the correct number, in %d attempts: %d\n",attempt+1, randomnum);
            attempt+=1;
			break;
        }
        else if (inp > randomnum) {
            printf("?? Your guess is too HIGH!\n");
        	attempt+=1;
		}
        else {
            printf("?? Your guess is too LOW!\n");
            attempt+=1;
        }
    }
    
    return 0;
}
