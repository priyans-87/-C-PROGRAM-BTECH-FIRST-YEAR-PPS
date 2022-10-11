#include<stdio.h>
#include<conio.h>
int main(){
    float m,h,e,ss,s;
    printf("enter your marks in MATH");
    scanf("%f",&m);
    printf("enter your marks in ENGLISH");
    scanf("%f",&e);
    printf("enter your marks in HINDI");
    scanf("%f",&h);
    printf("enter your marks in SOCIAL SCIENCE");
    scanf("%f",&ss);
    printf("enter your marks in SCIENCE");
    scanf("%f",&s);
    float marks_obtain=m+e+ss+h+s;
    float total_marks=500;
    float percentage=(marks_obtain/total_marks)*100;
    printf("TOTAL MARKS GOT IS %f", marks_obtain);
    printf("PERCENTAGE GOT IS %f",percentage);

}