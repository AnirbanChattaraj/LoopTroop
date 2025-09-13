//Write a program to count the number of digits in a given integer using a loop.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter your number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits are:%d",count);
    return 0;

}