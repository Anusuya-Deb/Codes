#include<stdio.h>
void indexopr(int *x, int n, int y){
    printf("The entered array is: \n");

    int i;
    for(i=0;i<n;i++)
        printf("%d ",*(x+i));

    int c=*(x+y);

    int j;
    for(j = 0; j < n; j++){
        if(j==y)
            *(x+j) = *(x+j);

        else
            *(x+j) = *(x+j)+c;
    }

    printf("Array after index operation : \n");

    int k;
    for(k=0;k<n;k++)
        printf("%d ",*(x+k));
}

int main()
{

    int p;
    printf("Enter number of elements of the array:\n");
    scanf("%d", &p);

    printf("Enter elements of the array:\n");

    int a[p];

    int q;
    for(q=0;q<p;q++)
        scanf("%d",&a[q]);

    int r;
    printf("Enter the desired index value:\n");
    scanf("%d",&r);

    indexopr(&a[0],p,r);

    return 0;
}
