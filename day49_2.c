//Print initials of a name with the surname displayed in full.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("String:");
    scanf("%[^\n]s", str);
    int lastspace;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            lastspace=i;
        }
    }
    if(str[0]!=' ' && str[0]!='\n')
    {
        printf("%c", str[0]);
    }
    for(i=0;i<lastspace;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\n')
        {
            printf("%c ", str[i+1]);
        }
    }
    for(i=lastspace+1;str[i]!='\0';i++)
    {
        printf("%c", str[i]);
    }
}