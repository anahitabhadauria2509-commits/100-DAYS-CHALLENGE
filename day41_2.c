//wap to print the characters of string in new line

#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a string:");
    scanf("%s", str);
    for(int i=0;str[i]!=0;i++)
    {
        printf("%c\n", str[i]);
    }
}