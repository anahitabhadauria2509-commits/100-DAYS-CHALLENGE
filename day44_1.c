//wap to count spaces,alphabets,digits and special character
#include<stdio.h>
int main()
{
    char str[100];
    int sc=0,digit=0,alpha=0,space=0;
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57){digit++;}
        else if(str[i]>='A'&&str[i]<='z'){alpha++;}
        else if(str[i]==' '){space++;}
        else{sc++;}
    }
    printf("Alphabets:%d",alpha);
    printf("digits:%d",digit);
    printf("spaces:%d",space);
    printf("special character:%d",sc);
}