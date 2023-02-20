#include<stdio.h>
typedef struct
{
    int dd;
    int mm;
    int yy;
} 
  date;

void earlierdate(date a,date b)
{
    if(a.yy==b.yy)
    {
        if(a.mm==b.mm)
        {
        if(a.dd<b.dd)
        {
        printf("First date is earlier");
        }
            
        else
        {
        printf("Second date is earlier");
        }
        }
        
    else
    {
        if(a.mm<b.mm)
        {
        printf("First date is earlier");
        }
        else
        {
        printf("Second date is earlier");
        }
    }
    }
        
    else
    {
       if(a.yy<b.yy)
       {
       printf("First date is earlier");
       }
       else
       {
       printf("Second date is earlier");
       }
    }
}

int main()
{
    date i,j;
    printf("Enter the first date in dd/mm/yy format\n");
    scanf("%d/%d/%d",&i.dd,&i.mm,&i.yy);
    printf("Enter the second date in dd/mm/yy format\n");
    scanf("%d/%d/%d",&j.dd,&j.mm,&j.yy);

    earlierdate(i,j);

    return 0;
}
