#include <stdio.h>

int main()
{
    double A, B;
    char operator;
    printf("Enter FIRST number: ");
    scanf("%lf", &A);
    printf("Enter SECOND number: ");
    scanf("%lf", &B);
    printf("Enter what operation to do: ");
    scanf("%s", &operator);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", A, B, A + B);
        break;
    case '-':
        printf("%lf - %lf = %lf", A, B, A - B);
        break;
    case '*':
        printf("%lf * %lf= %lf", A, B, A * B);
        break;
    case '/':
        printf("%d / %d = %d", A, B, A / B);
        break;
    default:
        printf("ERROR bad request !!!");
        break;
    }
    return 0;
}