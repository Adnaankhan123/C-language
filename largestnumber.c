#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("\nLargest number is %d.", a);
        }
        else{
            printf("\nLargest number is %d.", c);
        }
        
    }

   else{
    if (b>c)
    {
       printf("\nLargest number is %d", b);
    }
    
    else{
        printf("\nLargest number is %d", c);
    }
   }
    

    return 0;
}
