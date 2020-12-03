#include <stdio.h>

int main()
{

    int A;

    printf("Enter a number: ");
    scanf("%d", &A);

    if (A % 2 == 0 && A != 0)
    {
        printf("the number is even\n");
    }
    else if (A != 0)
    {
        printf("the number is odd\n");
    }

    if (A > 0)
    {
        printf("The number is bigger than zero");
    }
    else if (A < 0)
    {
        printf("The number is smaller than zero");
    }
    else
    {
        printf("The number is equal to zero");
    }
}