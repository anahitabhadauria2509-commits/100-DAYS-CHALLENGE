//
#include<stdio.h>
int main()
{
    int n, k;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter value:");
        scanf("%d", &arr[i]);}
    printf("Enter k:");
    scanf("%d", &k);

    if(k > n)
    {
        printf("-1");
        return 0;
    }

    for(int i = 0; i <= n - k; i++)
    {
        for(int j = i; j < i + k; j++)
        {
            if(arr[j] <0){
        printf("%d ,", arr[j]);
    }
}}

    return 0;
}