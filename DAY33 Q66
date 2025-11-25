// Insert an element in an array at a given position

#include <stdio.h>
int main(void){
    int n,pos,val,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter position and value: ");
    scanf("%d%d",&pos,&val);

    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=val; n++;

    printf("Array after insertion: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
