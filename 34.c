#include<stdio.h>
void dis(int b[][4])
    {
    int i,j;
    for(i=0;i<3;i++)
    { 
    printf("\n");
    for(j=0;j<4;j++) 
    printf("%d", b[i][j]);  
    }
    for(i=0; i<3; i++) 
    { 
    for(j=0;j<4;j++) 
    { 
    if
    (b[0][0] < b[i][j])
    {
    b[0][0] = b[i][j];
    }
    }
    }
    printf("maximum number in the 2D array : %d",b[0][0]);
}
 int main()
  {
  int a[3][4]={
           {6,4,3,2},
           {7,8,9,5},
		   {5,8,9,2}
       	   };
  dis(a);
  return 0;
  }

