//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n],freq[n]={0};
    for(int i=0;i<n;i++){
        printf("Enter value :")
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]>=n/2)
        {
            printf("%d",arr[i]);
        }
    }
}