#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, fact;
    fact = 1;
    printf("enter the value of n ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact = i*fact;
    }
        printf(" factorial is %d ", fact);
    return 0;
}
