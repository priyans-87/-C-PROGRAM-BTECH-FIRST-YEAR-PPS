#include<stdio.h>
#include<conio.h>
int main(){
    float p,r,t,s;
    printf("enter the principle\n");
    scanf("%f",&p);
    printf("enterr the rate of interest\n");
    scanf("%f",&r);
    printf("enter the time period in year");
    scanf("%f",&t);
    s=(p*r*t)/100;
    float  c=p+s;
    printf("the simple interest of is %f",s);
    printf("\nthe total ammount with simple interest is   %f\n",c);

}