// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int choice;
//     int a,b,c;
//     printf("Enter values of A\n");
//     scanf("%d",&a);
//     printf("Enter values of B\n");
//     scanf("%d",&b);
//     printf("enter the choice\n (1)-for addition.\n (2)-for subtraction\n (3)-for multiplication\n (4)-for division\n");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         c=a+b;
//         printf("%d",c);
//         break;
//     case 2:
//         c=a-b;
//         printf("%d",c);
//         break;
//     case 3:
//         c=a*b;
//         printf("%d",c);
//         break;    // if we not use break then after correct choice all beneath expressio will run
//     case 4:
//         c=a/b;
//         printf("%d",c);
//         break;    
//     default:printf("Wrong choice entered");
//         break;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
  int choise;
  int a, b, c;
  printf("enter the value of A\n");
  scanf("%d",&a);
  printf("enter the value of B\n");
  scanf("%d",&b);
  printf("select the choise\n (1)-for addition2\n (2)-for subtraction\n (3)-for multiply\n (4)-for devide\n");
  scanf("%d",&choise);
  switch (choise)
  {
  case 1:
  c=a+b;
  printf("%d", c);
  break;

  case 2:
  c=a-b;
  printf("%d", c);
  break;

  case 3:
  c=a*b;
  printf("%d", c);
  break;

    case 4:
  c=a/b;
  printf("%d", c);
  break;

  default:printf("wrong choise");
  break;

  }

}
