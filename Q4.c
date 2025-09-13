//Write a program to print all even numbers between 1 and 100.
#include<stdio.h>
int main(){
   for (int i = 1; i <=100; i++)
   {
    if (i%2==0)
    {
        printf("%d\n",i);
    }
    
   }
   return 0;
}