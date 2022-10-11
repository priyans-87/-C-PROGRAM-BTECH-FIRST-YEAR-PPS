#include<stdio.h>
#include<conio.h>
int main(){
    int n,rev=0,remainder;
    printf("Enter the number to reverse");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        printf("%d",remainder);
        rev=rev*10+remainder;
        n/=10;
        //printf("%d",n);

    }
    printf("\nthe reversed number is %d",rev);

}