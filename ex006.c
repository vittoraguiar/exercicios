#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Pls enter ur age: ");
    scanf("%d", &age);
    if (age <= 0)
    {
        printf("....");
    }
    else if (age < 5)
    {
        printf("Your aren't available to get a category.");
    }
    else if (age >= 5 && age <= 7)
    {
        printf("Your category is Infantil A.");
    }
    else if (age >= 8 && age <= 10)
    {
        printf("Your category is Infantil B.");
    }
    else if (age >= 11 && age <= 13)
    {
        printf("Your category is Juvenil A.");
    }
    else if (age >= 14 && age <= 17)
    {
        printf("Your category is Juvenil B.");
    }
    else if (age >= 18)
    {
        printf("Your category is Adulto.");
    }
    printf("\n");
    return 0;
}