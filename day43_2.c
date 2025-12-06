//wap to check whether a string is palindrome or not 
#include<stdio.h>
int main()
{
    char str[100],temp,tstr[100];
    int count =0,i,flag=1;
    printf("Enter a string:");
    scanf("%s", str);
    for(i=0;str[i]!='\0';i++){
        tstr[i]=str[i];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(int i=0;i<count/2;i++){
        temp=str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=temp;
    }
    for(i=0;i<count;i++){
        if(str[i]!=tstr[i])
        {flag=0;break;}
    }
    if (flag==1)
    {printf("\nPalindrome!");}
        else{printf("\nNot palindrome!");}
}