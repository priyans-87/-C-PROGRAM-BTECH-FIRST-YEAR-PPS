#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the value of first number");
    scanf("%d",&a);
    printf("enter the value of second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped value of first number is :- %d\n",a);
    printf("Swapped value of second number is :- %d",b);
}