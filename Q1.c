//Write a program to print numbers from 1 to n using a loop.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}