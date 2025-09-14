//WAP TO STORE THE NAME,ADDRESS AND AGE OF ANY STUDENTS AS PER USER REQUIREMENTS
#include <Stdio.h>
#include <Conio.h>

int main() {
    FILE *fp; 
    char Naam[20], Addr[40];
    int age;
    char choice;

    fp = fopen("student.txt", "a"); // Open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("\nEnter NAME AGE ADDRESS: ");
        scanf("%s %d %s", Naam, &age, Addr);

        // Write to file
        fprintf(fp, "%s\t%d\t%s\n", Naam, age, Addr);

        printf("Do you want to add more data ? (Y/N): ");
        scanf(" %c", &choice);  

    } while (choice == 'Y' || choice == 'y');

    fclose(fp);
    printf("\n? Data saved to student.txt\n");

    return 0;
}
