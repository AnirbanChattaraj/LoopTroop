//Write a program to check whether a given number is a Palindrome using loops.
#include <stdio.h>
int main() {
    int n, original, reversed = 0, ld;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while (n != 0) {
        ld = n % 10;              
        reversed = reversed * 10 + ld;  
        n = n / 10;               
    }

    if (original == reversed) {
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome");
    }

    return 0;
}
