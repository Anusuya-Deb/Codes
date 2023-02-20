#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
	printf("Enter the two values x and y : \n");
    scanf("%d%d",&(*p),&(*q));
    printf("The values are %d and %d",*p,*q);
    return 0;
}
