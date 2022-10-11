#include<stdio.h>
#include<conio.h>
void main()
{float math,eng,hindi,science,p_edu,s_studies,Max_marks,mar_obtain,per_age;
printf("ENTER YOUR MARKS IN MATH :-");
scanf("%f",&math);
printf("ENTER YOUR MARKS IN ENGLISH :-");
scanf("%f",&eng);
printf("ENTER YOUR MARKS IN HINDI :-");
scanf("%f",&hindi);
printf("ENTER YOUR MARKS IN SCIENCE :-");
scanf("%f",&science);
printf("ENTER YOUR MARKS IN PHYSICAL EDUCATION :-");
scanf("%f",&p_edu);
printf("ENTER YOUR MARKS IN SOCIAL STUDIES :-");
scanf("%f",&s_studies);
printf("ENTER TOTAL MARKS OF THE EXAM :-");
scanf("%f",&Max_marks);
mar_obtain=math+hindi+eng+science+s_studies+p_edu;
printf("TOTAL MARKS OBTAINED IS :-%f",mar_obtain);
per_age=(mar_obtain/Max_marks)*100;
printf("\nTOTAL PERCCENTAGE IS :- %f",per_age);
}