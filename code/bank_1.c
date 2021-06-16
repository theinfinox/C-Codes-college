#include<stdio.h>
#include<string.h>
int main(){
  char g;
  float b,n;
  printf("Enter your gender: ");
  scanf("%c",&g);
  printf("Enter your balance: ");
  scanf("%f",&b);
  if(g=='f' || g=='F'){
    if(b>5000){
      n=0.05*b;
      printf("Your bonus is %f\n",n);
    }
    else{
      n=0.02*b;
      printf("Your bonus is %f\n",n);
    }
  }
  else if(g=='m' || g=='M'){
    n=0.02*b;
    printf("Your bonus is %f\n",n);
  }
  else{
    printf("incorrect format\n");
  }
return 0;
}
