//wap to reverse a string 
#include<stdio.h>
int main()
{
    char str[100],temp;
    int count =0;
    printf("Enter a string:");
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(int i=0;i<count/2;i++){
        temp=str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=temp;
    }
    printf("%s", str);
    return 0;
}
