#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,f,flag=0;
    char a[100],b[]="aeiou",c[]="AEIOU";
    printf("ENTER THE STRING :-");
    scanf("%s",&a);
    n=strlen(a);
    printf("%d\n",n);
    f=strlen(b);
    printf("%d\n",f);
    for(i=0;i<n;++i){
        for(j=0;j<f;++j){
            if(a[i]==b[j] || a[i]==c[j]){
                flag+=1;
            }
            else{
                flag==0;
            }
        }
    }
    printf("the number of vowel present is %d",flag);
}
