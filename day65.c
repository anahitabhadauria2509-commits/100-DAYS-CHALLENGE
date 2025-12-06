//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram"
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    int n1 = strlen(s);
    int n2 = strlen(t);

    if(n1 != n2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; i < n1 - 1; i++)
    {
        for(int j = i + 1; j < n1; j++)
        {
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

            if(t[i] > t[j])
            {
                char temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }

    for(int i = 0; i < n1; i++)
    {
        if(s[i] != t[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}