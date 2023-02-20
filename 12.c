#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter 5 element at %d : \n",i);
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
   	}
    int *b;
	b=&a[0];
    printf("Array:");
   	for(i=0;i<5;i++)
   	{
   	printf("%d",*(b+i));
	}
	return 0;
}
