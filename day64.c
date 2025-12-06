//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++)
    {
        int freq[256] = {0};
        int len = 0;

        for(int j = i; j < n; j++)
        {
            if(freq[s[j]] == 1){
            break;}
            else{
            freq[s[j]] = 1;
            len++;}
        }

        if(len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}
