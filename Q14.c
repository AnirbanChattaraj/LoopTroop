//Write a program to find the LCM (Least Common Multiple) of two numbers using loops.
#include<stdio.h>
int main(){
    int a,b,temp,x,y;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    x = a;
    y = b;
    while (b!=0)
    {
      temp=b;
      b=a%b;
      a=temp;
    }
    printf("LCM is:%d",(x*y)/a);
    return 0;
}