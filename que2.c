//WRITE A RECURSIVE FUNCTION TO PRINT FIRST N NATURAL NUMBERS IN REVERSE ORDER.
#include<stdio.h>
void f1(int n)
{
  if (n>0)
  {
    printf("%d\n", n);
    f1(n-1);
  }


}
int main()
{
//int n=10;
    f1(5);
    return 0;
}