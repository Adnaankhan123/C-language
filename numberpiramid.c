#include <stdio.h>

int main() {
    int i,j,n=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=6-i; j++)
        {
        printf("%d\t", n);
        n=n+1;
    }
    printf("\n");
}
    return 0;
}