#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,r,c,a[r][c],transpose[20][20];
    buffer[1024 * 4 * 1024];
    printf("enter the row and column for matrix a");
    scanf("%d%d",r,c);
    printf("ENTER MATRIX A");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            printf("ENTER A %d%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            transpose[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;++i){
        for(j=0;j<r;++j){
            printf("%d",transpose[i][j]);
            if(j==r-1){
                printf("\n");
            }
            return 0;
        }
    }
}