//multiply 2 matrix
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("ROWS1:");
    scanf("%d",&r1);
    printf("COLOUMNS1:");
    scanf("%d",&c1);
    printf("ROWS2:");
    scanf("%d",&r2);
    printf("COLOUMNS2:");
    scanf("%d",&c2);
    int arr[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
        printf("Enter the element at index (%d,%d):",i,j);
        scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int brr[r2][c2];
    int prod[r1][c2];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
        {
        printf("Enter the element at index (%d,%d):",i,j);
        scanf("%d", &brr[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    //multiplying matrix
    if(c1==r2)
    {
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                prod[i][j]=0;
                for(k=0;k<c1;k++){
                    prod[i][j]+=arr[i][k]*brr[k][j];
                }
            }

        }
        printf("\n-----------PRODUCT MATRIX--------\n");
        for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        {
            printf("%d",prod[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Matrix cannot be multiplied");
    }
    return 0;
}