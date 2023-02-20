#include<stdio.h>
void fibonacciseries(int n)
{ 
    int i,term1,term2,nextterm;
    term1=0,term2=1;
      for(i=1;i<=n-2;i++)
    {
    nextterm=term1+term2;
    term1=term2;
    term2=nextterm;
}
printf("%d",nextterm);
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
    
