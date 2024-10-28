#include <stdio.h>

int main() {
    int no;

    printf("Enter a number between 0 and 100: ");
    scanf("%d", &no);

    if (no == 0) 
    {
        printf("The number is in the range: 0\n");
    } 
    else if (no <= 10) 
    {
        printf("The number is in the range: 1-10\n");
        
        if (no == 1) 
        {
            printf("The number is: 1\n");
        } 
        else if (no == 2) 
        {
            printf("The number is: 2\n");
        } 
        else if (no == 3) 
        {
            printf("The number is: 3\n");
        } 
        else if (no == 4) 
        {
            printf("The number is: 4\n");
        } 
        else if (no == 5) 
        {
            printf("The number is: 5\n");
        } 
        else if (no == 6) 
        {
            printf("The number is: 6\n");
        } 
        else if (no == 7) 
        {
            printf("The number is: 7\n");
        } 
        else if (no == 8) 
        {
            printf("The number is: 8\n");
        } 
        else if (no == 9) 
        {
            printf("The number is: 9\n");
        } 
        else if (no == 10) 
        {
            printf("The number is: 10\n");
        }
    } 
    else if (no <= 20) 
    {
        printf("The number is in the range: 11-20\n");
    } 
    else if (no <= 30) 
    {
        printf("The number is in the range: 21-30\n");
    } 
    else if (no <= 40) 
    {
        printf("The number is in the range: 31-40\n");
    } 
    else if (no <= 50) 
    {
        printf("The number is in the range: 41-50\n");
    } 
    else if (no <= 60) 
    {
        printf("The number is in the range: 51-60\n");
    } 
    else if (no <= 70) 
    {
        printf("The number is in the range: 61-70\n");
    } 
    else if (no <= 80) 
    {
        printf("The number is in the range: 71-80\n");
    } 
    else if (no <= 90) 
    {
        printf("The number is in the range: 81-90\n");
    } 
    else 
    {
        printf("The number is in the range: 91-100\n");
    }

    printf("The program has ended \n");
    return 0;
}
