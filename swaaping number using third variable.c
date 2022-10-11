#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
float c;
printf("Enter any number");
a=getchar();
printf("the char is ");
putchar(a);
printf("Exhibiting the use of scanf");
printf("Enter three numbers");
scanf("%d%d%f",&a,&b,&c);
printf("%d%d%f",a,b,c);
}
