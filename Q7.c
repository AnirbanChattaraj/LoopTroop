//Write a program to find the factorial of a number using a loop.
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter your number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        fact *=i;
    }
    printf("The factorial is :%d",fact);
    return 0;
}