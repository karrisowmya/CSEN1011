#include<stdio.h>
int main()
{
  float basic,da,hra,pf,gross;
  printf("Enter basic salary of an employee: ");
  scanf("%f",&basic);
  hra=basic*0.1;
  da=basic*0.05;
  pf=basic*0.12;
  gross=basic+hra+da-pf;
  printf("Basic salary of employee:%0.2f\n",basic);
  printf("hra of employee:%0.2f\n",hra);
  printf("da of employee:%0.2f\n",da);
  printf("pf of employee:%0.2f\n",pf);
  printf("Gross salary of an employee:%0.2f",gross);
  return 0;
}