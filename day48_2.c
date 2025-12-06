//reverse every word in a sentence without changing the word order
#include<stdio.h>
#include<string.h>
void revword(char str[100]){
    int len=strlen(str);char temp;
    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return;
}
int main()
{
    char str[100],word[100];
    int j=0;
    printf("String:");
    scanf("%[^\n]s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ' && str[i]!='\n')
        {
            word[j++]=str[i];
        }
        else
        {
            word[j]='\0';
            revword(word);
            printf("%s ", word);
            j=0;
        }
        
    }
     if(j>0)
        {
            word[j]='\0';
            revword(word);
            printf("%s ", word);
        }
    
}