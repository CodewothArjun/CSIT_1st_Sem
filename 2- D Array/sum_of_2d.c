#include<stdio.h>
int main(){
    int mat1[100][100], mat2[100][100],row,col,i,j;
    printf("Enter the number of row and column");
    scanf("%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter %d row and %d column",i,j);
            scanf("%d %d",mat1[i][j],mat2[i][j]);
        }
    }
}