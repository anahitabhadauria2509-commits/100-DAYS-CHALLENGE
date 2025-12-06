//check if one string is rotation of other or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],temp[100];
    int len1,len2;
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter a string: ");
    scanf("%s", str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("NOT ROTATION");
    }
    else{
        strcpy(temp,str1);
        strcat(temp,str1);
        if(strstr(temp,str2)!=NULL){
            printf("ROTATION");
        }
        else{
            printf("NOT ROTATION");
        }
    }
    
}