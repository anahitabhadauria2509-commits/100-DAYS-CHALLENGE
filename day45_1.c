//frequency of a character in a string
#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    int freq=0;
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    printf("character:");
    scanf(" %c", &ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            freq++;
        }
    }
    printf("FREQUENCY: %d",freq);
}