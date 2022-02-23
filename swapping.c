#include <stdio.h>
int main()
{
    int a,b,temp;
 printf("\nEnter value of a: ");
 scanf("%d",&a);
 printf("\nEnter value of b: ");
 scanf("%d",&b);

    printf("Before Swapping a:%d\n",a);
    printf("Before Swapping b:%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping a: %d",a);
    printf("\nAfter swapping b: %d",b);

    return 0;
}