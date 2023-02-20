#include<stdio.h>
void avgmaxmin(int *x,int *y)
{
    float avg;
    avg=((*x)+(*y))/2.0;
    printf("Average of the two numbers : %f\n",avg);
    
    int max;
    max=(*x>*y)? *x:*y;
    printf("Maximum of the two numbers : %d\n",max);

    int min;
    min=(*x<*y)? *x:*y;
    printf("Minimum of the two numbers : %d\n",min);
}

int main()
{
    int i,j;
    printf("Enter two numbers:\n");
    scanf("%d%d",&i,&j);
    avgmaxmin(&i,&j);

    return 0;
}
