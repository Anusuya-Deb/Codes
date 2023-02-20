#include<stdio.h>
int main(){
    int x,y,*p,*q,temp;
    printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("before swap x=%d y=%d\n",x,y);
    p=&x;
    q=&y;
    temp=*p;
    *p=*q;
    *q=temp;
     printf("after swap x=%d y=%d\n",x,y);
    return 0;
}

