//WRITE A RECURSIVE FUNCTION TO PRINT FIRST N  EVEN NATURAL NUMBERS.
#include<stdio.h>
void f1(int n)
{
  if (n>=1)
  {
  f1(n-1);
  printf("%d ",2*n);
  // f1(n-1);
  }
 
}
int main()
{
    f1(5);
    return 1;
}