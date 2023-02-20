#include<stdio.h>

int main()
{
    int a,b,c,*x,*y,*z,p,q,r,max,min;
    printf("Enter three values:\n");
    scanf("%d%d%d",&a,&b,&c);

    x=&a;
    y=&b;
    z=&c;
    
    p=*x;
    q=*y;
    r=*z;

    if(p>q)
	{
        max=p;
        if(p>r)
		   {
            printf("Maximum of the three value : %d\n",max);
           }
             else
				{
                    max=r;
                    printf("Maximum of the three value : %d\n",max);
                }
    }
    else
    {
        max=q;
        if(q>r)
	    	{
            printf("Maximum of the three value : %d\n",max);
            }
             else
			    {
                    max=r;
                    printf("Maximum of the three value : %d\n",max);
                }
    }
    if(p<q)
	{
        min=p;
        if(p<r)
		   {
            printf("Minimum of the three value : %d\n",min);
           }
              else
			    {
                    min=r;
                    printf("Minimum of the three value : %d\n",min);
                }
    }
    else
	{
        min=q;
        if(q<r)
		{
          printf("Minimum of the three value : %d\n",min);
        }
            else
			    {
                    min=r;
                    printf("Minimum of the three value : %d\n",min);
                }
    }

    return 0;
}
