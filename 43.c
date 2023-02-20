#include<stdio.h>
int gcd(int a,int b)
{
    int max,min;
    max=(a>b)? a:b;
    min=(a<b)? a:b;

    int p=max%min;
    
    if(p==0)
    {
        return min;
    }

    max=min;
    min=p;

    gcd(max,min);
}

int main()
{
    int i,j;
    printf("Enter two numbers :\n");
    scanf("%d%d",&i,&j);
    
    int hcf;
    hcf=gcd(i,j);

    printf("GCD of %d and %d is %d",i,j,hcf);

    return 0;
}
