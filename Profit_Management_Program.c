#include <stdio.h>
#include <string.h>
#include <conio.h>   // for getche()

int main() {
    FILE *fp, *temp;
    char name[20], searchName[20], ch;
    int cp, profitPercent;
    float sp;
    int updated = 0;

    // open file for appending
    fp = fopen("product.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // input loop
    do {
        printf("\nEnter Product Name: ");
        scanf("%s", name);

        printf("Enter Cost Price: ");
        scanf("%d", &cp);

        printf("Enter Profit Percentage: ");
        scanf("%d", &profitPercent);

        sp = cp + (cp * profitPercent / 100.0);

        fprintf(fp, "%s %d %d %.2f\n", name, cp, profitPercent, sp);

        printf("Do you want to add more products? (Y/N): ");
        ch = getche();
        printf("\n");

    } while (ch == 'y' || ch == 'Y');

    fclose(fp);

    // display all products
    fp = fopen("product.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n%-15s %-10s %-15s %-10s\n", "Product", "CP", "Profit(%)", "SP");
    printf("---------------------------------------------------\n");

    while (fscanf(fp, "%s %d %d %f", name, &cp, &profitPercent, &sp) != EOF) {
        printf("%-15s %-10d %-15d %-10.2f\n", name, cp, profitPercent, sp);
    }
    fclose(fp);

    // search product
    printf("\nEnter product name to search: ");
    scanf("%s", searchName);

    fp = fopen("product.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %d %f", name, &cp, &profitPercent, &sp) != EOF) {
        if (strcmp(name, searchName) == 0) {
            printf("\nProduct Found!\n");
            printf("Name: %s\nCP: %d\nProfit%%: %d\nSP: %.2f\n",
                   name, cp, profitPercent, sp);

            printf("\nDo you want to change the profit percentage? (Y/N): ");
            ch = getche();
            printf("\n");

            if (ch == 'y' || ch == 'Y') {
                printf("Enter new Profit Percentage: ");
                scanf("%d", &profitPercent);
                sp = cp + (cp * profitPercent / 100.0);

                printf("\nUpdated Record:\n");
                printf("Name: %s\nCP: %d\nProfit%%: %d\nSP: %.2f\n",
                       name, cp, profitPercent, sp);
                updated = 1;
            }
        }
        // write record (updated or not) into temp file
        fprintf(temp, "%s %d %d %.2f\n", name, cp, profitPercent, sp);
    }

    fclose(fp);
    fclose(temp);

    // replace old file with updated one
    remove("product.txt");
    rename("temp.txt", "product.txt");

    if (!updated) {
        printf("\nProduct '%s' not found in records.\n", searchName);
    } else {
        printf("\nFile updated successfully!\n");
    }

    return 0;
}

