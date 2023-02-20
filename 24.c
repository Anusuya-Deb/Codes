#include<stdio.h>
int main()
{
	int i,j,k,l,m,p;
	char a[20];
	printf("enter a strint of 20 character:\n");
	scanf("%s",a);
	for(p=0;p<20;p++)
	{
	printf("%c",a[p]);
	}
	char *b=a;
	char *c=a+4;
	char *d=a+8;
	char *e=a+12;
	char *f=a+16;
	
	printf("first part of the string:\n");
	for(i=0;i<4;i++)
	{
	printf("%c",*(b+i));
	}
	printf("second part of the string:\n");
	for(j=0;j<4;j++)
	{
	printf("%c",*(c+j));
	}
	printf("third part of the string:\n");
	for(k=0;k<4;k++)
	{
	printf("%c",*(d+k));
	}
		printf("fourth part of the string:\n");
	for(l=0;l<4;l++)
	{
	printf("%c",*(e+l));
	}	printf("fifth part of the string:\n");
	for(m=0;m<4;m++)
	{
	printf("%c",*(f+m));
	}
	
	return 0;
}
