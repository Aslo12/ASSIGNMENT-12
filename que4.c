//WRITE A RECURSIVE FUNCTION TO CALCULATE FACTORIAL OF N..
#include<stdio.h>
int fact(int n)
{
    if(n==0|| n==1)
    return 1;
    return (n*fact(n-1));

}
int main()
{
    fact(5);
    printf("factorial of 5 is : %d",fact(5));
    return 1;
}