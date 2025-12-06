//Check if two strings are anagrams of each other.
#include<stdio.h>
#include<string.h>
void sort(char str[100]){
    char temp;
    int len=strlen(str);
    for (int i=0;i<len-1;i++)
    {
        for (int j=i+1;j<len;j++)
        {
            if (str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    return;
}
int main()
{
    char str1[100],str2[100];
    printf("Enter string:");
    scanf("%s", str1);
    printf("Enter string:");
    scanf("%s", str2);
    sort(str1);
    sort(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Anagrams");
    }
    else{
        printf("Not anagrams");
    }
    
}