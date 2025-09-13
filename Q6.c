//Write a program to check if a given number is a prime number using loops.
#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
    }
    if (n==1)
    {
        printf("Neither Prime nor Composite");
    }
    else if (a==0)
    {
        printf("Prime");

    }
    else{
        printf("Composite");
    }
    return 0;
}