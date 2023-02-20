#include<stdio.h>
int summation(int n)
{
    if(n==0)
    {
        return n;
    }

    else
    {
        return (n+summation(n-1));
    }
}

int main()
{
    int i;
    printf("Enter the number :\n");
    scanf("%d",&i);

    int sum;
    sum=summation(i);

    printf("Summation of numbers from 1 to %d is %d",i,sum);

    return 0;
}
