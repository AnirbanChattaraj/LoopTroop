//Write a program to print the Fibonacci series up to N terms using a loop.
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);  
        next = t1 + t2;     
        t1 = t2;             
        t2 = next;
    }

    return 0;
}
