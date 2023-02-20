#include<stdio.h>
void main()
{
	char a[1000],*p;
	int i,j,n;
	printf("enter string:");
	scanf("%s",&a);
	for(i=0;i<1000&&*(a+i)!='\0';i++)
	{
		n++;
	
	}
	p=&a[0];
	printf("first pattern:\n");
	for(i=0;i<n;i++)
	{
	for(j=i;j<n;j++)
	printf("%c",*(p+j));
	printf("\n");
	}
	printf("second pattern:\n");
	for(i=(n-1);i>=0;i--)
	{
	for(j=i;j>=0;j--)
	printf("%c",*(p+j));
	printf("\n");
	}
	
}

