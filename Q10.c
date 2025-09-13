//Write a program to find the greatest common divisor (GCD) of two numbers using loops.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    while (b!=0)
    {
      temp=b;
      b=a%b;
      a=temp;
    }
    printf("GCD is:%d",a);
    return 0;
}