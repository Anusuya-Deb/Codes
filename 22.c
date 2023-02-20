#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter element at %d : \n",i);
	scanf("%d",&a[i]);
   	}
    int *b;
	b=&a[4];
    printf("Reverse Array:");
   	for(i=0;i<5;i++)
   	{
   	printf("%d",*(b-i));
	}
	return 0;
}
	
