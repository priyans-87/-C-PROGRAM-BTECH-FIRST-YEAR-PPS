#include<stdio.h>
#include<conio.h>
void main()
{int a=56,b=78,c;
printf("UNSWAPPED VALUE OF A IS :- %d\n",a);
printf("UNSWAPPED VALUE OF B IS :- %d\n",b);
c=a+b;
a=c-a;
b=c-b;
printf("SWAPPED VALUE OF A IS :- %d\n",a);
printf("SWAPPED VALUE OF B IS :- %d\n",b);


}