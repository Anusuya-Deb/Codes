#include<stdio.h>
int factorial(int n)
{
 int product=1;
 while(n>=1)
    {
        product=product*n;
        n=n-1;
    }

    return product;
}

int main()
{
    int i,j,num,fact;
    double sum,sum1,sum2;
    sum1=0;
    sum2=0;
    printf("Enter a number:\n");
    scanf("%d",&num);

    for(i=1;i<=num;i=i+2)
    {
        fact=factorial(i);
        sum1=sum1+(1.0/fact);
    }

    for(j=2;j<=num;j=j+2)
    {
    	fact=factorial(j);
        sum2=sum2+(fact/1.0);
    }
    sum=sum1+sum2;
    printf("Sum of series 1/1! + 2!/1 + 1/3! + 4!/1 .. %d %1f ",num,sum);

    return 0;
}
