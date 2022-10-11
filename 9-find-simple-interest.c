#include<stdio.h>
#include<conio.h>
void main(){
    float s,p,i,t,imonth,t_amm;
    printf("ENTER THE AMMOUNT OF PRINCIPLE :-");
    scanf("%f",&p);
    printf("ENTER THE AMOUNT OF INTEREST PER ANNUM :-");
    scanf("%f",&i);
    printf("ENTER THE TIME OF PERIOD FOR INTEREST IN YEAR :-");
    scanf("%f",&t);
    imonth=i/100;
    s=p*(1+(imonth*t));
    printf("TOTAL CALCULATED AMMOUNT WITH INTEREST IS :- %f\n",s);
    t_amm=s-p;
    printf("AND THE TOTAL AMMOUNT TO BE PAID IN %f MONTH IS :- %f",t,t_amm);
}