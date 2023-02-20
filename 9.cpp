#include<stdio.h>

int main()
{
    
    int *b,i,a[5];
    for(i = 0; i < 5; i++)
    {
    printf("Enter element at %d position \n", i);
    scanf("%d", &a[i]);
    }
    b = &a[1] + 2;
    printf("Enter element to swap with: \n");
    scanf("%d", &(*b));
    for( i = 0; i < 5; i++)
    {
    printf("%d ",a[i]);
    }

	return 0;
}
