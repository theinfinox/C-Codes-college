/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=1,s;
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
do {
    s=i*5;
   printf("%d * %d = %d\n",i,5,s);
   i++;
    
}
while(i<=n);
    return 0;
}
