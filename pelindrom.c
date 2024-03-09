// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int s=0,no,r,t;
//     printf("ENter a no\n");
//     scanf("%d",&no);
//     t=no;
//     while(no>0)
//     {
//         r=no%10;
//         s=s*10+r;
//         no=no/10;
//     }
//     printf("your reverse no. is=%d\n",s);
//     if(t==s)
//     {printf("this is an pellindrome\n");}
//     else{printf("not a pellindrome");}
//     return 0;
// }
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int s , r, t, no;
    s=0;
    printf("enter a number\n");
    scanf("%d", &no);
    t=no;
    while (no>0)
    {
        r = no%10;
        s = s*10+r;
        no = no/10;
    }
    printf("your reverse number is %d\n", s);
    if (t==s)
    {
        printf("it is pelindrome");
    }
    else{
        printf("it is not pelindrome");
    }

    return 0;
}
