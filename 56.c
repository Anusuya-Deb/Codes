#include<stdio.h>
int func(int x,int y,int *series)
{
	int n,k,p=0,q=n,remainder;
	while (n!=0)
	{
		remainder=n%10;
		series[k]=remainder;
		k++;
		n/=10;
	}
	if(remainder==y)
	{
	p=*(k+series);
	
	}
	q=*(series+k+1);
	
	return 1;
}

int main()
{
int a,b,series[100];
printf("enter an integer : \n");
scanf("%d",&a);
printf("enter a 1-digit num : \n");
scanf("%d", &b);
return 0;
}

