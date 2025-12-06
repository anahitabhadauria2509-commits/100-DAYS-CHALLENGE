//perform diagonal transversal of a matrix


#include<stdio.h>

int main()
{
    int r, c, i, j;

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
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                
            }
        }
    }
}