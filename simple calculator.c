// Simple Calculator in C
#include <stdio.h>

int main() {
    int oper, inp, i, k, l, total;

    printf("\t\tSimple Calculator\n");
    printf("Choose any operation:\n 1.Add\n 2.Subtract\n 3.Division\n 4.Multiply\n 5.Modular Division (MOD)\n");
    scanf("%d", &oper);

    if (oper >= 1 && oper <= 4) {
        printf("How many inputs will you give? ");
        scanf("%d", &inp);
    }

    if (oper == 1) {  // Addition
        total = 0;
        for (i = 0; i < inp; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &k);
            total += k;
        }
    }
    else if (oper == 2) {  // Subtraction
        printf("Enter number 1: ");
        scanf("%d", &total);
        for (i = 1; i < inp; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &k);
            total -= k;
        }
    }
    else if (oper == 3) {  // Division
        printf("Enter number 1: ");
        scanf("%d", &total);
        for (i = 1; i < inp; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &l);
            if (l != 0)
                total /= l;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        }
    }
    else if (oper == 4) {  // Multiplication
        printf("Enter number 1: ");
        scanf("%d", &total);
        for (i = 1; i < inp; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &l);
            total *= l;
        }
    }
    else if (oper == 5) {  // Modular Division
        printf("Enter two numbers: ");
        scanf("%d%d", &k, &l);
        if (l != 0)
            total = k % l;
        else {
            printf("Error: Division by zero!\n");
            return 0;
        }
    }
    else {
        printf("Invalid operator!!!\n");
        return 0;
    }

    printf("Your result is: %d\n", total);
    return 0;
}

