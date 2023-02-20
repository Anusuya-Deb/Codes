#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float i,j;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&i,&j);
    printf("%d%d",a+b,a-b);
    printf("%0.1f %0.1f",i+j,i-j);
   
    return 0;
}
