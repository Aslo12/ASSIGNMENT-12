//write a recursive function to print binary of a given decimal numbers..
#include<stdio.h>
void DtoB(int n)
{
   if(n==1)
   printf("1");
   else
   {
   DtoB(n/2);
   printf("%d",n%2);
   }

}
int main()
{

DtoB(25);
return 1;
}