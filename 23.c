#include<stdio.h>
int main()
{
	int i,j,a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element at %d position:\n",i);
		scanf("%d",&a[i]);
	}
	int *b=&a[0],*c=&a[5];
	printf("array:");
	for(i=0;i<5;i++)
	{
	 printf("%d",*(b+i));
	 printf("%d",*(c+i));	
 }
	return 0;
}

