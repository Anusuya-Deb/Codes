#include<stdio.h>
int main()
{
	int i,j,a[3][3];
	for( i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
      printf("Enter element at %d %d position\n:",i,j);
      scanf("%d",&a[i][j]);
	}
	}
	int *b=&a[0][0];
    printf ("2D Array:");
	for(i=0;i<9;i++)
	{
	printf("%d",*(b+i));
	}
	return 0;
}
