#include<stdio.h>
void copyarraydata(int *a,int n)
{
    printf("Entered array:\n");

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    int *b=a;

    int j;
    for(j=0;j<n;j++)
    {
        *(b+j)=*(a+j);
    }

    printf("New array into which data of first array was copied :\n");

    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",*(b+k));
    }
}

int main()
{
    int x;
    printf("Enter number of elements of the array:\n");
    scanf("%d",&x);

    printf("Enter the elements of the array:\n");
    
    int p[x];
    int q;
    for(q=0;q<x;q++)
    {
        scanf("%d",&p[q]);
    }

    copyarraydata(&p[0],x);

    return 0;
}
