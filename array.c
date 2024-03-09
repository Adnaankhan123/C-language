#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a[5];
   int i;
   printf("Enter 5 numbers : ");
   for(i=0; i<=4; i++){
   scanf("%d ", &a[i]);
  }
    printf("the array elements are ");
    for(i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int size, i, search, a[100];
//     printf("enter the size of array\n");
//     scanf("%d", &size);
//     printf("enter the elements\n");
//     for  (i = 0; i < size; i++)
//     {
//        scanf("%d", &a[i]);
//     }

//     printf("enter the searcher element\n");
//     scanf("%d", &search);

//     search = a[i];
//     for  (i = 0; i < size; i++)
//     {
//         if (search==a[i])
//         { printf("number is found");
//          break;
            
//         }
        
//         printf("%d number is exist", search);
//     }

    

//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=4;
//     int *p, **q;
//     p = &a;
//     q = &p;
//     printf("*p is %d, p is %d, a is % d q is %d", *p, p, a, q);
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     int c=1;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf(" %d ",c);
//         }
//             c=c+1;
//         printf("\n");
        
//     }
    
//     return 0;
// }
// #include <stdio.h>

// void printFib(int n){
//     int a = 0, b = 1, c;

//     for(int i = 0; i < n; i++){
//         printf("%d, ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

// int main()
// {
//     int n = 10;
//     printFib(n);
//     return 0;
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int no, avg, sum;
//     for (int i = 1; i <= 10; i++)
//     {
//             printf("enter the number\n");
//             scanf("%d", &i);
//     }

        
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int num, sum = 0;
//     float avg;

//     // Ask the user for input
//     printf("Enter 10 numbers:\n");

//     // Use a for loop to read 10 numbers and calculate the sum
//     for(int i = 1; i <= 10; i++) {
//         printf("Number %d: ", i);
//         scanf("%d", &num);
//         sum += num;
//     }

//     // Calculate the average
//     avg = (float)sum / 10;

//     // Print the results
//     printf("The sum of the 10 numbers is: %d\n", sum);
//     printf("The average of the 10 numbers is: %.2f\n", avg);

//     return 0;
// }