#include<stdio.h>
#include<conio.h>
int main()
{int a,rev=0,remain;
printf("ENTER THE NUMBER");
scanf("%d",&a);
while (a!=0){
    remain=a % 10;
    rev=rev*10+remain;
    a/=10;
}
printf("REVERSED VALUE IS :- %d",rev);
}