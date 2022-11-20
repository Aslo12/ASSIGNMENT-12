//WRITE A RECURSIVE FUNCTION TO CALCULAGE SUM OF FIRST N NATURAL NUMBERS..
#include<stdio.h>
int sum(int n)
{

   if(n==1)
   
   return 1;
   int a=n+sum(n-1);
   return a;
}

int main()
{
    sum(5);
    printf("%d",sum(5));
    return 1;
}