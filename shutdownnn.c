#include <stdio.h>
#include <stdlib.h>

int main() {
    int s;
    char command[50];  // to store the shutdown command

    printf("Enter time in seconds after which your computer will shutdown: ");
    scanf("%d", &s);

    // create the shutdown command with time
    sprintf(command, "C:\\Windows\\System32\\shutdown /s /f /t %d", s);

    printf("Shutting down the computer in %d seconds...\n", s);
    system(command);

    return 0;
}

