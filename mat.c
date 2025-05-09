#include <stdio.h>
int main ()
{
    int n,j;
    printf("Enter the size of matix : ");
    scanf("%d",&n);
    int matrix [n][n];
    //INPUT
    for (int i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&matrix [i][j]);
        }
    }
    //OUTPUT
    printf("Matrix:\n");
    for (int i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d ",matrix [i][j]);
        }
        printf("\n");
    }
    return 0;
}