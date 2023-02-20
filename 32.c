#include<stdio.h>
void dis(int *b)
{
    int i;
    for(i=0;i<5;i++)
    printf("%d ",b[i]);
    for (i=0; i < 5; ++i) 
    {
    if (b[0] < b[i])
    {
       b[0] = b[i];
    }
    }
   printf("Maximum element : %d", b[0]);
 
}
  int main()
  {
  int a[5]={6,4,3,2,1};
  dis(a);
  return 0;
  }
  
