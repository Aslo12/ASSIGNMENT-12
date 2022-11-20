//WRITE A RECURSIVE FUNCTION TO PRINT REVERSE OF A GIVEN NUMBERS.
#include<stdio.h>
void print(int n);
void main()
{
    print(5);

}

void print(int n)
{
  if(n>=1)
  {
printf("%d  ",n);
print(n-1);

  }

}