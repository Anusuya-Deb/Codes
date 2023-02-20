#include<stdio.h>
void eachdigitreverse(int n)
{
    int lastdigit;
    lastdigit=n%10;

    if(n==0)
    {
        return;
    }

    printf("%d",lastdigit);

    eachdigitreverse(n/10);
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("Reversed number:");
    
    eachdigitreverse(x);
     return 0;
}
