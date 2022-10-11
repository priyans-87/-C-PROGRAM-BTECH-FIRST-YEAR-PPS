#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j,min=0,max=0;
    int array[]={1,20,30,15,4,3,53,7,9};
    n=sizeof(array)/sizeof(array[0]);
    printf("%d\n",n);
    for(i=0;i<=n;++i){
        for(j=0;j<=n;++j){
            if(min>array[j]){
                min=array[i];
                if(max<array[i]){
                    max=array[i];
                }
            }
        }
    }
    printf("minimum of array is %d\n",min);
    printf("maximum of array is %d",max);

}

  
