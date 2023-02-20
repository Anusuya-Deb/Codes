#include<stdio.h>
void callbyvalue(int x)
{
    x=x+2;
    printf("Call by value operation \n");
}

void callbyreference(int *y)
{
    *y=*y+2;
    printf("Call by reference operation \n");
}

int main()
{
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);

    callbyvalue(i);
    printf("Entered value after call by value operation : %d\n",i);

    callbyreference(&i);
    printf("Entered value after call by reference operation : %d\n",i);

    return 0;
}
