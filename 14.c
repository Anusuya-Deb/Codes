#include<stdio.h>
void fibonacciseries(int n)
{ 
    int i;
    int term1=0,term2=1;
    int nextterm=term1+term2;
    printf("%d %d ",term1,term2);
      for(i=1;i<n;i++)
    {
    nextterm=term1+term2;
    printf("%d ",nextterm);
    term1=term2;
    term2=nextterm;
}
}
    int main()
    {
    	int num;
    printf("Enter the number of terms:\n");
    scanf("%d",&num);
    printf("\nFibonacci series %d :",num);
    fibonacciseries(num);

	return 0;
}
    
