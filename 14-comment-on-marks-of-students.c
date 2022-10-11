#include<stdio.h>
#include<conio.h>
void main(){
    float math,eng,hindi,science,p_edu,s_studies,Max_marks,mar_obtain,per_age;
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
printf("TOTAL MARKS OBTAINED IS :-%f\n",mar_obtain);
per_age=((mar_obtain/Max_marks)*100);
printf("PERCENTAGE IS  %f\n",per_age);
else if(per_age<=40){
    printf("YOU GOT FAILED MARKS");
}
else if(per_age>=50 && per_age<70){
    printf("YOU GOT THIRD MARKS");
}
else if(per_age>=70 && per_age<80){
    printf("YOU GOT SECOND MARKS");
}
else if(per_age>=80 && per_age<90){
    printf("YOU GOT FIRST POSITION");
}
else if(per_age>=90 && per_age<100){
    printf("YOU GOT EXCELENT MARKS");
}
}