#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    // Using switch-case to determine the string representation
    switch (number) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 10:
            printf("Ten");
            break;
        default:
            printf("Out of bounds! Please enter a number between 1 and 10.");
            break;
    }

    return 0;
}
