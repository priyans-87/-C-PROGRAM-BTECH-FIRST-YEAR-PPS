#include<stdio.h>
#include<conio.h>
void main()
{float pie=3.14159,r,area,parameter;
printf("ENTER THE RADIUS OF CIRCLE FOR AREA AND PAREMETER\n");
scanf("%f",&r);
area=pie*(r*r);
parameter=2*pie*r;
printf("AREA OF GIVEN CIRCLE IS :- %f\n",area);
printf("PARAMETER OF GIVEN RADIUS IS :- %f",parameter);
}