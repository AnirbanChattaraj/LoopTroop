//Write a program to calculate the sum of the first N natural numbers.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
   for (int i = 1; i <=n; i++)
   {
     sum += i;  
   }
      printf("The sum of first %d natural numbers is: %d\n", n, sum);
   return 0;
    
}