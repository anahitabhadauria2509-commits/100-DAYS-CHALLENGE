//find the length of a string without using built in function 
#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a string:");
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("No. of characters:%d",count);

}