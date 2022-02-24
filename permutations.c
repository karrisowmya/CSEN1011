#include<stdio.h>
int main()
{
	int b,g,m,t,i,bs=1,gs=1,ts=1;
	float s;
	scanf("%d%d",&g,&b);
	t=b+g;
	for(i=1;i<=b;i++)
	{
		bs=bs*i;
	}
	for(i=1;i<=g;i++)
	{
		gs=gs*i;
	}
	for(i=1;i<=t;i++)
	{
		ts=ts*i;
	}
	s=((gs*bs)/ts);
	printf("%.1f",1-s);
}