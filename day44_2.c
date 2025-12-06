//wap to replace spaces with hyphen in the string
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '){str[i]='-';}
    }
    printf("%s", str);
}