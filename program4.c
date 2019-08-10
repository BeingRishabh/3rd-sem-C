#include<stdio.h>
     
int main()
    {
       int a, b, c;
       
       printf("Enter two numbers to add:\n");

       printf("number 1:");

       scanf("%d", &a);

       printf("number 2:");

       scanf("%d", &b);
       
       c = a + b;
       
       printf("Sum of the numbers = %d\n", c);
       
       return 0;
    }
