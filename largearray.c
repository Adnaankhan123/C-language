#include <stdio.h>

int main() {
    int arr[5];
    int i, largest;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        }
    // Initialize largest as the first element of the array
    largest = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, c, d;
//     int *p, *q, *r;
//     a = 3;
//     b = 4;
//     c = 5;
//     p = &a;
//     q = &b;
//     r = &c;
//      d = *p;
//      *p = b;
//      *q = c;
//      *r = d;
    
//      printf("%d%d%d", *p, *q, *r);
//     return 0;
// }
