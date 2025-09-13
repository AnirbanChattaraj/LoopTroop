//Write a program to check whether a given number is a Perfect number using loops.
#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers cannot be perfect squares.\n");
    } else {
        int root = sqrt(n);  
        if (root * root == n) {
            printf("%d is a Perfect Square.\n", n);
        } else {
            printf("%d is NOT a Perfect Square.\n", n);
        }
    }

    return 0;
}
