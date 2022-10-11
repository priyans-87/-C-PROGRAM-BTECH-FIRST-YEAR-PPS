#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,b=4,c=15;
    if(a>=b && a>=c){
        printf("VALUE OF A IS GREATER THEN B AND C");
    }
    if(b>=a && b>=c){
        printf("VALUE OF B IS GREATER THEN A AND C");
    }
    if(c>=b && c>=a){
        printf("VALUE OF C IS GREATER THEN A AND B");
    }
}