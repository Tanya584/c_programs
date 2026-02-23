// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12)
           printf("Child\n");   // Child
    else if (age <= 19)
        printf("Teenager\n");   // Teenager
    else if (age <= 59)
         printf("Adult\n");   // Adult
    else if (age >= 60)
         printf("Senior Citizen\n");  // Senior Citizen
    else
         printf("Invalid age entered.\n");   // Invalid

    return 0;
}
  
