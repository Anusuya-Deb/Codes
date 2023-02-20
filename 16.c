#include<stdio.h>
void disfunc(int m,int n,char c)
{
	int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c ",c);
        }

        printf("\n");
    }
}

int main()
{
    disfunc(3,2,'-');
    printf("AB\n");
    disfunc(6,3,'=');
    printf("DF\n");
    disfunc(2,5,'*');

    return 0;
}
