//check if the elements of diagonal matrix are distinct
#include<stdio.h>

int main()
{
    int r, c, i, j;
    int flag = 1;

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
                diag[i]=arr[i][j]; 
            }
        }
    }
    }
    else{
        printf("NOT A SQUARE MATRIX (NO DIAGNOL)");
    }
    for(i=0; i<r; i++){
        for(j=i+1; j<r; j++){
            if(diag[i] == diag[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("All diagonal elements are DISTINCT.");
    else
        printf("Diagonal elements are NOT distinct.");
}
