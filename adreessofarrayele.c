#include<stdio.h>
#include<conio.h>
/*int main(){
    int a[5]={1,2,3,4,5},*p;
    for(int i=0;i<5;i++){
        p=&a[i];
        printf("address of %d is %x\n",a[i],p);
    }
}*/
/*int main(){
    int a[7],mean,median,i,j,sum;
    a[7]={1,2,3,4,5,6,7};
    for(i=0;i<=7;++i){
        sum+=a[i];
    }
    mean=(sum/7);
    median=(7+1)/2;
    printf("mean of given data is %d",mean);
    printf("median of given data is %d",median);
    
}*/
/*float pie=3.14;
float circ(float *l);
float area(float *c);
void main(){
    float l;
    printf("enter the valueof radius");
    scanf("%f",&l);
    printf("circumfrence of given circle is %f\n",circ(&l));
    printf("area of given circle is %f\n",area(&l));
}
float circ(float *l){
    float circum;
    circum=2*pie*(*l);
    return circum;
}
float area(float *c){
    float areaofc;
    areaofc=pie*pie*(*c);
    return areaofc;
}*/
float pie=3.14;
float circ(float *l,float *b);
float area(float *c,float *d);
void main(){
    float l,b;
    printf("enter the valueof lenth and breath");
    scanf("%f%f",&l,&b);
    printf("circumfrence of given rectangle is %f\n",circ(&l,&b));
    printf("area of given rectangle is %f\n",area(&l,&b));
}
float circ(float *l,float *b){
    float circum;
    circum=2*(*l+*b);
    return circum;
}
float area(float *c,float *d){
    float areaofc;
    areaofc=(*c)*(*d);
    return areaofc;
}
