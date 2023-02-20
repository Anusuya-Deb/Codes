#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void backwardseries(int n)
{
    if(n==0)
    {
        return;
    }

    printf("%d\n",n);
    backwardseries(n-2);
}

int main()
{
    int x;
    printf("Enter first term of the final series:\n");
    scanf("%d",&x);
    printf("Final series is:\n");
    backwardseries(x);

    return 0;
}
