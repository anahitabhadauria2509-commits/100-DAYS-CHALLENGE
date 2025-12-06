//Find the longest word in a sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100],longest[50];
    int maxlen=0,j=0;
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    for(int i=0; str[i]!='\0';i++){
        if(str[i]!= ' ' &&  str[i]!='\n')
        {
            word[j++]=str[i];
        }
        else
        {
            word[j]='\0';
            if(j>maxlen){
                maxlen=j;
                strcpy(longest,word);
            }
            j=0;
        }
        
        word[j]='\0';
        if(j>maxlen){
            maxlen=j;
            strcpy(longest,word);
        }
    }
    printf("longest word=%s", longest);
}