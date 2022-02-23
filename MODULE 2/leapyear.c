#include<stdio.h>
int main()
{
  int a,year;
  printf("Enter any year: ");
  scanf("%d",&year);
  a=year%4;
  if(a==0)
    printf("%d is a leap year",year);
  else
    printf("%d is not a leap year",year);
  return 0;
}
