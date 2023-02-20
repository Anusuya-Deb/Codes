#include<stdio.h>
void reversestring(char *b)
{
    if(*b=='\0')
    {
        return;
    }

    reversestring(b+1);

    printf("%c",b[0]);
}

int main()
{
    char a[20];
    printf("Enter a string:\n");
    scanf("%s",a);

    printf("Reversed string is ");
    reversestring(a);

    return 0;
}
