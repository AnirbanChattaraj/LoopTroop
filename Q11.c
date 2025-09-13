//Write a program to check whether a given number is an Armstrong number using loops.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, ld, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

   
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    
    temp = n;
    while (temp != 0) {
        ld = temp % 10;
        sum += pow(ld, digits);
        temp = temp / 10;
    }

    
    if (sum == original) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }

    return 0;
}
