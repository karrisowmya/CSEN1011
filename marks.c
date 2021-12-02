#include<stdio.h>
int main()
{
	int tel,hin,eng,mat,phy;
	float tot,avg,per;
	printf("\nEnter telugu marks: ");
	scanf("%d",&tel);
	printf("\nEnter hindi marks: ");
	scanf("%d",&hin);
	printf("\nEnter english marks: ");
	scanf("%d",&eng);
	printf("\nEnter maths marks: ");
	scanf("%d",&mat);
	printf("\nEnter physics marks: ");
	scanf("%d",&phy);
	tot=tel+hin+eng+mat+phy;
	avg=tot/5;
	per=(tot/500)*100;
	printf("\nTotal marks:%f",tot);
	printf("\nAverage:%f",avg);
	printf("\nPercentage:%f",per);
}