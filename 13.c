#include<stdio.h>
int average(int x,int y,int z)
{
	int average=(x+y+z)/3;
	return average;
}
int main()
{
int p,q,r;
printf("first number:");
scanf("%d",&p);
printf("second number:");
scanf("%d",&q);
printf("third number:");
scanf("%d",&r);
int result=average(p,q,r);
printf("average of three number : %d",result);
return 0;
}
