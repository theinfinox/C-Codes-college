#include<stdio.h>
void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Number %d is Even\n",a);
        
    }
    else{
        printf("Number %d is odd\n",a);
        
    }
}
