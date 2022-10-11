#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,area,perimeter,A,P;
    printf("enter the lenth and breath of the rectrangle");
    scanf("%f%f",&l,&b);
    area=l*b;
    P=l+b;
    perimeter=2*P;
    printf("AREA OF THE RECTANGLE IS %f\n",area);
    printf("THE PERIMETER OF THE GIVEN RECTANGLE IS %f\n",perimeter);
}