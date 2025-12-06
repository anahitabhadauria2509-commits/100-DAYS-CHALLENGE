//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include<stdio.h>
int main()
{
int n,j;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n],ans[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&arr[i]);
        ans[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ans[i]*=arr[j];
        }
        ans[i]/=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d,",ans[i]);
    }
}