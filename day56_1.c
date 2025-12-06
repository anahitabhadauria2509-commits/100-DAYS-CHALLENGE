//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int found=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d,",arr[j]);
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("-1,");
        }
    }
   
}