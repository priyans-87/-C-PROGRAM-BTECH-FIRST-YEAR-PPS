#include<stdio.h>
#include<conio.h>
int main()
{float a,i,c=0;
printf("ENTER ANY POSITIVE INTIGER VALUE FOR CHECKING PRIME");
scanf("%f",&a);
for (i=1;1<=a;i++){
    if (a/i==0)
    {
        c++;
    }   
}
if(c==2){
    printf("%f IS AN PRIME NUMBER\n",a);
}
else{
    printf("%f IS NOT AN PRIME NUMBER\n",a);
}
return 0;
}

