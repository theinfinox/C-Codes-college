#include<stdio.h>
void main(){
    int a;
    float f,c;
    printf("Enter 1 for C to F \t Enter 2 for F to C: ");
    scanf("%d",&a);
    if(a==1){
    printf("Enter C: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Converted value is %f",f);
    }
    if(a==2){
    printf("Enter F: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Converted value is %f",c);
    }

    


}

