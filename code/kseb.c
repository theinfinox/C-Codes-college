#include <stdio.h>

int main()
{   
    float u,s,g;
    printf("Enter your units: ");
    scanf("%f",&u);
    if(u>600){
        s=u-600;
        g=390+s*1;
        printf("Your charge is :  %f",g);
    }
    else if(u>400){
        s=u-400;
        g=230+s*0.8;
        printf("Your charge is :  %f",g);
        
        
    }
    else if(u>200){
        s=u-200;
        g=100+s*0.65;
        printf("Your charge is :  %f",g);
        
    }
    else{
        g=u*0.65;
        printf("Your charge is :  %f",g);
        
    }    
    return 0;
}
