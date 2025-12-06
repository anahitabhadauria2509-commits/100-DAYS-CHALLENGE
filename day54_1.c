//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int x=-1;
    int leftsum=0;
    int total=0;
    int rightsum=0;
    for(int i=1;i<=n;i++){
        total+=i;
    }
    for(int i=1;i<=n;i++)
    {
        rightsum=total-leftsum-i;
        if(leftsum==rightsum)
        {
            x=i;
            break;
        }
        else
        {
            leftsum+=i;
        }
    }
    printf("%d",x);
}