#include <stdio.h>

int main() {
    int age, category;

    printf("Enter age: ");
    scanf("%d", &age);

    // Assign category based on age
    if (age >= 0 && age <= 12)
        category = 1;   // Child
    else if (age <= 18)
        category = 2;   // Teenager
    else if (age <= 60)
        category = 3;   // Adult
    else if (age >= 61)
        category = 4;   // Senior Citizen
    else
        category = 0;   // Invalid

    // Switch case
    switch(category) {
        case 1:
            printf("Category: Child\n");
            break;
        case 2:
            printf("Category: Teenager\n");
            break;
        case 3:
            printf("Category: Adult\n");
            break;
        case 4:
            printf("Category: Senior Citizen\n");
            break;
        default:
            printf("Invalid age entered.\n");
    }

    return 0;
}
