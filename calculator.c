#include<stdio.h>
int main(int argc, char const *argv[])
{
    char operator;
    int a, b;
    printf("Enter operator %c ");
    scanf("%c", &operator);
    printf("enter the value of A ", a);
    scanf("%d", &a);
    printf("enter the value of B ", b);
    scanf("%d", &b);
    switch (operator)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    
    default:
    printf("error, wrong operator");
        break;
    }

    return 0;
}
