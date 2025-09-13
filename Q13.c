//Write a program to find the sum of digits of a number using a loop
#include<stdio.h>
int main(){
    int ld,n,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    if (n < 0) {
        n = -n; 
    }
    while (n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("The sum is:%d",sum);
    return 0;
}