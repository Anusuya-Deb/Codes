#include<stdio.h>

int main()
{
    int a[5],i,*b=&a[0],j;
    b=b+1;
    *b=2;
    printf("Enter the third element of the array:\n",*b);
    scanf("%d",&a[0]);
    for(i=1;i<2;i++)
    {
     *(b-i)=*(b)-(2*i);
    }


    printf("first,second and third element of the array:\n");
    b=&a[0];
    for(j=0;j<3;j++)
    {
    printf(" %d",*(b+j));
    }

   return 0;
}
