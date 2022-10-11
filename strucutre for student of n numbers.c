#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{    
    //char find[200];
    char name[100];
    int rn;
    int marks;
}s[100];
void main(){
    int x,i,dt;
    
    printf("enter the number of student");
    scanf("%d",&x);
    for(i=0;i<x;++i){
        printf("enter name of student in small letter");
        printf("enter the name of student\n");
        scanf("%s",&s[i].name);
        printf("enter the rool number of student\n");
        scanf("%d",&s[i].rn);
        printf("enter marks scored by student\n");
        scanf("%d",&s[i].marks);
    }
    /*for(i=0;i<x;++i){
        printf("NAME OF THE STUDENT IS :- %s\n",s[i].name);
        printf("ROLL NO OF %s IS %d\n",s[i].name,s[i].rn);
        printf("MARKS OBTAINED BY %s IS %d",s[i].name,s[i].marks);
    }*/
    //char find[200];
    printf("ENTER THE NAME OF STUDENT YOU WANT TO GET DETAILS\n");
    char find[20];
    scanf("%s",find);
    //puts(s[20].find);
    printf("%s\n",find);
    for(i=0;i<x;i++){
        if(strcmp(s[i].name,find)==0){
            dt=i;
            //printf("%d\n",dt);
        }
        
        
    }
        
    


    printf("NAME OF THE STUDENT :- %s\n",s[dt].name);
    printf("ROLL NUMBER OF STUDENT IS :- %d\n",s[dt].rn);
    printf("MARKS OBTAINED BY STUDENT IS :- %d\n",s[dt].marks);
    

}
