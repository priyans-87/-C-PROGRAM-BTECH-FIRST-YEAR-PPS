#include<stdio.h>
#include<conio.h>
void  main(){
    int ar,ac,br,bc,a[200][200],b[200][200],i,j,k,mul[200][200],sum[][]=0;
    printf("enter the row and column\n");
    scanf("%d%d",&ar,&ac);
    printf("enter the first matrix a");
    for(i=0 ;i<ar;i++){
        for(j=0;j<ac;j++){
            printf("ENTER A %d%d :-",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the row and column for second matrix\n");
    scanf("%d%d",&br,&bc);
    printf("enter the second matrix b");
    for(i=0;i<br;i++){
        for(j=0;j<bc;j++){
            printf("ENTER B %d%d :-",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix a is \n");
    for(i=0 ;i<ar;i++){
        for(j=0;j<ac;j++){
            ///printf("ENTER A %d%d",i+1,j+1);
            printf("%d ",a[i][j]);
            if(j==ar-1){
                printf("\n");
            }
            else{
                continue;
            }
        }
    }
    printf("first matrix b is \n");
    for(i=0 ;i<br;i++){
        for(j=0;j<bc;j++){
            ///printf("ENTER A %d%d",i+1,j+1);
            printf("%d ",b[i][j]);
            if(j==br-1){
                printf("\n");
            }
            else{
                continue;
            }
        }
    }
    /*for(i=0;i<ar;++i){
        for(j=0;j<bc;++j){
            for(k=0;k<br;++k){
                mul[i][j]+=a[i][k]*b[k][j];
            }

        }
        
    }
    for(i=0;i<ar;++i){
        for(j=0;j<bc;++j){
            printf("%d ",mul[i][j]);
            if(j==2){
                printf("\n");
            }
            else{
                continue;
            }
        }
    }*/
    printf("\nsum of matrix is\n");
    for(i=0,i<ar;++i){
        for(j=0;j<ac;++j){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0,i<ar;++i){
        for(j=0;j<ac;++j){
            printf("%d",sum[i][j]);
        }
    }

}