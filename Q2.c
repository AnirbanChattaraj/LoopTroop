//Write a program to print the multiplication table of a given number.
#include<stdio.h>
int main(){
int n;
printf("Enter your number:");
scanf("%d",&n);
for (int i = 1; i <= 10; i++)
{
    printf("%dx%d=%d\n",n,i,n*i);

}
return 0;
}
