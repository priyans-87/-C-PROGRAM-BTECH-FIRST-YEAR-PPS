#include<stdio.h>
#include<conio.h>
int main(){
    int a=40,b=20,c=60;
    if(a>b && a>c){
        printf("a is greater then b and c");
    }
    if(b>a && b>c){
        printf("value of b is greater then a and c");
    }     
    else{
        printf("value of c is greater then b and a");
    }
}