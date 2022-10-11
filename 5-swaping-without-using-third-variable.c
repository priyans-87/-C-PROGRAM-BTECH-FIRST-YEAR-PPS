#include<stdio.h>
#include<conio.h>
void main()
{int a=56,b=78;
printf("UNSWAPPED VALUE OF A IS :- %d\n",a);
printf("UNSWAPPED VALUE OF B IS :- %d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("SWAPPED VALUE OF A IS :- %d\n",a);
printf("SWAPPED VALUE OF B IS :- %d\n",b);
}



