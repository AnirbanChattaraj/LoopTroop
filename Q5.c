//Write a program to reverse the digits of a given number using a loop.
#include<stdio.h>
int main(){
    int n,ld,rev=0;
    printf("Enter your number:");
    scanf("%d",&n);
    while (n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}