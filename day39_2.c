//find sum of diagonal of a square matrix
#include<stdio.h>

int main()
{
    int r, c, i, j;
    int sum=0;

    printf("ROWS: ");
    scanf("%d", &r);

    printf("COLUMNS: ");
    scanf("%d", &c);

    int arr[r][c],diag[r];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element at (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    if(r==c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    }
    else{
        printf("NOT A SQUARE MATRIX (NO DIAGONAL)");
    }
    printf("SUM=%d",sum);
    return 0;
}